#include "main.h"

/**
 * print_binary - to print b specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_binary(va_list argList, int *numOfchar)
{
    char buffer[32];
    int num, len;

		num = va_arg(argList, int);
		len = _itoa_binary(num, buffer);
		write(1, buffer, len);
		*numOfchar += len;
}