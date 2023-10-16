#include <stdio.h>
#include "main.h"
/**
* function_dI - Printf function
* @format: input
* @numOfchar: input
* Return: Printed numOfchar
*/
void function_dI(const char *format, int *numOfchar)
{
if (*format == 'd' || *format == 'i')
{
numOfchar += write(1, format, 1);
}
}
