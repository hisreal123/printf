#include "main.h"

/**
 * print_rot13 - to print R specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_rot13(va_list argList, int *numOfchar)
{
	int st_len;
	char *st, *temp;
    int count = 0, x;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	st = va_arg(argList, char *);
    st_len = strlen(st);

    temp = (char *)malloc(st_len + 1);
    if (temp == NULL)
    {
        free(temp);
        return;
    }

    while (count <= st_len)
    {
        for (x = 0; x < 52; x++)
        {
            if (st[count] == alpha[x])
            {
                st[count] = rotate[x];
                break;
            }
        }
        temp[count] = st[count];
        count++;
    }
    temp[count] = '\0';
    st = temp;
    
	*numOfchar += write(1, st, st_len);
    free(temp);
}
