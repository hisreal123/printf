#include <stdio.h>
#include "main.h"

/**
 * conversion_spec - function to select specifier
 * @format: specifier tag
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void conversion_spec(const char *format, va_list argList, int *numOfchar)
{
	if (*format == '%')
		*numOfchar += write(1, format, 1);

	if (*format == 'c')
	{
		char c = va_arg(argList, int);

		*numOfchar += write(1, &c, 1);
	}

	if (*format == 's')
	{
		char *st = va_arg(argList, char *);
		int st_len = strlen(st);

		*numOfchar += write(1, st, st_len);
	}

	if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(argList, int);
		char buffer[12];
		int len;

		len = _itoa(num, buffer);
		write(1, buffer, len);
		*numOfchar += len;
	}

}
