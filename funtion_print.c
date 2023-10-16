#include <stdio.h>
#include "main.h"

void print(const char *format, int *numOfchar)
{
    if (*format != '%'){

        write(1, &format, 1);

        if (*format != '\n')
        {
            numOfchar++;
        }
    }
}