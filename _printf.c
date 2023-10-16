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

            if (*format == 'd' || *format == 'i'){
                numOfchar += write (1, format, 1);
            }

            if (*format == '\0')
                break;
            if (*format == '%')
            {
               write(1, format, 1);
               numOfchar++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(argList, int);
                numOfchar  += write(1, &c, 1);
            }
            else if (*format == 's')
            {
                char *st = va_arg(argList, char *);
                int st_len = strlen(st);
                numOfchar = numOfchar + write(1, st, st_len);
            }
        }
        format++;
    }
    va_end(argList);
    return numOfchar;
}