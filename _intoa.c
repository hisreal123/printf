#include <stdio.h>
#include "main.h"

/**
 * _itoa - function to print number string
 * @num: number
 * @buffer: buffer
 * Return: length of numbers
 */

int _intoa(int num, char *buffer)
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
	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}	while (num > 0);

	if (is_neg)
	{
		buffer[i++] = '-';
	}

	left = 0;
	right = i - 1;

	while (left < right)
	{
		char temp = buffer[left];

		buffer[left] = buffer[right];
		buffer[right] = temp;
		left++;
		right--;
	}
	buffer[i] = '\0';
	return (i);
}
