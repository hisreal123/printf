#include <stdio.h>
#include "main.h"


int main ()
{
    int numOfchar;
    int num = 42;

    _printf("%c\n", 'c');
    _printf("%s\n", "s");
    _printf("%%\n");
    _printf("%d\n", num);
    _printf("%i\n", num);

    return (0);
}