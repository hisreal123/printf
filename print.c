#include <stdio.h>
#include "main.h"

void print(const char *format, int *numOfchar)
{
    numOfchar += write(1, format, 1);
    // printf("%d\n", numOfchar);
}