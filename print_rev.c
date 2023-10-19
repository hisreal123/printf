#include "main.h"

/**
 * print_rev - to print s specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_rev(va_list argList, int *numOfchar)
{
	int st_len, x, y = 0;
	char *st;
    char *temp;

	st = va_arg(argList, char *);
	st_len = strlen(st);

    temp = (char *)malloc(st_len + 1);
    if (temp == NULL)
    {
        free(temp);
        return;
    }

    for (x = st_len - 1; y <= st_len; y++, x--)
    {
        temp[y] = st[x];
    }
    temp[y] = '\0';
    st = temp;

	*numOfchar += write(1, st, st_len);
    free(temp);
}
