#include <stdio.h>
#include "main.h"
/**
* function_char - Printf function
* @numOfchar: input
* @argList: input
* Return: Printed chars
*/
void function_char(va_list argList, int *numOfchar)
{
char c = va_arg(argList, int);
numOfchar  += write(1, &c, 1);
}
