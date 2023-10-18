#include "main.h"

/**
 * print_string - to print s specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_string(va_list argList, int *numOfchar)
{
    int st_len;
    char *st;

    st = va_arg(argList, char *);
		if (st == NULL)
				st = "(null)";
		st_len = strlen(st);
		*numOfchar += write(1, st, st_len);
}