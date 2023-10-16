#include <stdio.h>
#include "main.h"
/**
* _printf - produces output according to format
* @format: input
* Return: number of characters
*/
int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list argList;

	if (format == NULL)
		return (-1);
	va_start(argList, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				print_char++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(argList, int);
				write(1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				char *st = va_arg(argList, char*);
				int st_len  = 0;
				while (st[st_len] != '\0')
					st_len++;
				write(1, st, st_len);
				print_char += st_len;
			}
		}
		format++;
	}
	va_end(argList);
	return (print_char);
}
