#include <stdio.h>
#include "main.h"

void print_dI(const char *format, int *numOfchar)
{
    if (*format == 'd' || *format == 'i'){
        numOfchar += write (1, format, 1);
    }
}