#include <stdio.h>
#include "main.h"
/**
* _printf - Printf function
* @format: format
* Return: Printed chars
*/
int _printf(const char *format, ...)
{
    int numOfchar = 0;
    va_list argList;

    if(format == NULL)
        return (-1);

    va_start(argList, format);

    while (*format)
    {
        if(*format != '%')
        {

            write(1, format, 1);

            if(*format != '\n'){
                numOfchar++;
            }
        }
        else
        {
            format++;

            print_dI(format, &numOfchar);

            if (*format == '\0')
                break;
            if (*format == '%')
            {
                print_percent(format, &numOfchar);
            }
            else if (*format == 'c')
                print_char(argList, &numOfchar);
            else if (*format == 's')
                print_string(argList, &numOfchar);
        }
        format++;
    }
    va_end(argList);
    return numOfchar;
}