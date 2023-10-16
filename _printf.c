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

            if (*format == 'd' || *format == 'i')
            {
                int num = va_arg(argList, int);
                char num_str[50];
                int len = 0;
                int i = len;
                int temp = num;

                if (num < 0)
                {
                    write(1, "-", 1);
                    num = -num;
                    numOfchar++;
                }

                while (temp != 0)
                {
                    num_str[len++] = (temp % 10) + '0';
                    temp /= 100;
                }


                while (i >= 0)
                {
                    write(1, &num_str, 1);
                    i--;
                }
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
