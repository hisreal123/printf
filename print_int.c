#include "main.h"

/**
 * print_int - to print d or i specifier
 * @argList: position of va pointer
 * @numOfchar: length of characters
 * Return: empty
 */

void print_int(va_list argList, int *numOfchar)
{
    char buffer[12];
    int num, len;
	
		num = va_arg(argList, int);

        if (num == INT_MIN)
        {
            buffer[0] = '-';
            len = _itoa(-(num / 10), buffer + 1);
            buffer[len] = '0' + (-(num % 10));
            len++;
        }
        else
            len = _itoa(num, buffer);
		    
        write(1, buffer, len);
		*numOfchar += len;
}