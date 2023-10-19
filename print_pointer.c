#include "main.h"

/**
 * print_pointer - to print p specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_pointer(va_list argList, int *numOfchar)
{
	int st_len;
	void *p = va_arg(argList, void *);

	if (p == NULL)
	{
		*numOfchar += write(1, "(nil)", 5);
		return;
	}

	st_len = strlen(p);
	numOfchar += write(2, p, st_len);
}
