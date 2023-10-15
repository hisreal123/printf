#include <stdio.h>
#include "main.h"

void print_char(va_list argList, int *numOfchar)
{
    char c = va_arg(argList, int);
    numOfchar  += write(1, &c, 1);
}