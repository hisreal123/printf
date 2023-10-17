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
            numOfchar++;
        }
        else
        {
            format++;

            if (*format == 'd' || *format == 'i')
            {
                function_dI(argList, &numOfchar);
            }
            if (*format == '\0')
                break;
            if (*format == '%')
                function_percent(format, &numOfchar);
            else if (*format == 'c')
                function_char(argList, &numOfchar);
            else if (*format == 's')
                function_string(argList, &numOfchar);
        }
        format++;
    }
    va_end(argList);
    return numOfchar;
}
