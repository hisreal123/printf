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
	if (format == NULL)
		return;
	else if (*format == '%')
		*numOfchar += write(1, format, 1);
	else if (*format == 'c')
		print_char(argList, numOfchar);
	else if (*format == 's')
		print_string(argList, numOfchar);
	else if (*format == 'd' || *format == 'i')
		print_int(argList, numOfchar);
	else if (*format == 'b')
		print_binary(argList, numOfchar);
	else if (*format == 'r')
		print_rev(argList, numOfchar);
	else if (*format == 'p')
		print_pointer(argList, numOfchar);
	/**
	 * else if (*format == 'R')
	 * print_rot13(argList, numOfchar);
	 */
	else
	{
		*numOfchar += write(1, format - 1, 1);
		*numOfchar += write(1, format, 1);
	}
}
