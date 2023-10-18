#include "main.h"

/**
 * print_char - to print c specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_char(va_list argList, int *numOfchar)
{
	char c;

	c = va_arg(argList, int);
	*numOfchar += write(1, &c, 1);
}
