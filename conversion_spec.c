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
	int st_len, num, len;
	char *st, c;
	
	if (*format == '%')
		*numOfchar += write(1, format, 1);

	if (*format == 'c')
	{
		c = va_arg(argList, int);

		*numOfchar += write(1, &c, 1);
	}

	if (*format == 's')
	{
		*st = va_arg(argList, char *);
		st_len = strlen(st);

		*numOfchar += write(1, st, st_len);
	}

	if (*format == 'd' || *format == 'i')
	{
		char buffer[12];
	
		num = va_arg(argList, int);
		len = _itoa(num, buffer);
		write(1, buffer, len);
		*numOfchar += len;
	}

	if (*format == 'b')
	{
		char buffer[32];

		num = va_arg(argList, int);
		len = _itoa_binary(num, buffer);
		write(1, buffer, len);
		*numOfchar += len;
	}
}
