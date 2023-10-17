#include <stdio.h>
#include "main.h"

void _itoa(int num, char *buffer)
{
	int i = 0;
	int is_neg = 0;
	int left;
	int right;

	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}
	do 
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}	while (num > 0);

	if (is_neg)
	{	buffer[i++] = '-';
	}
	
	left = 0;
	right = i -1;

	while (left < right)
	{
		char temp = buffer[left];
		buffer[left] = buffer[right];
		buffer[right] = temp;
		left++;
		right--;
	}
	buffer[i] = '\0';
	}

	
/**
* function_dI - Printf function
* @format: input
* @numOfchar: input
* Return: Printed numOfchar
*/
void function_dI(va_list argList, int *numOfchar)
{
   int num = va_arg(argList, int);
   char buffer[12];
   int len;

   _itoa(num, buffer);
   len = strlen(buffer);
   write(1, buffer, len);
   numOfchar += len;
}
