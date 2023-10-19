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

	if (format == NULL)
		return (-1);
	va_start(argList, format);

	while (*format)
	{
		if (*format != '%')
			numOfchar += write(1, format, 1);
		else
		{
			format++;
			conversion_spec(format, argList, &numOfchar);
		}

		format++;
	}
	va_end(argList);
	return (numOfchar);
}
