#include <stdio.h>
#include "main.h"
/**
* function_string - Printf function
* @numOfchar: input
* @argList: input
* Return: Printed chars
*/
void function_string(va_list argList, int *numOfchar)
{
char *st = va_arg(argList, char *);
int st_len = strlen(st);
numOfchar = numOfchar + write(1, st, st_len);
}
