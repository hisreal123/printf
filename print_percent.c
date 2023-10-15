#include <stdio.h>
#include "main.h"

void print_percent(const char *format, int *numOfchar)
{
    write(1, format, 1);
    numOfchar++;
}
