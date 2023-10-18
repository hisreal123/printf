#include "main.h"

/**
 * _itoa_binary - function to change number to bin
 * @num: number to be changed
 * @buffer: array
 * Return: length
 */

int _itoa_binary(int num, char *buffer)
{
	int i = 0;
	unsigned int temp_num = (unsigned int)num;
	int left, right = 0;
	char temp;

	if (num < 0)
	{
		buffer[i++] = '1';
		temp_num = -(unsigned int)num;

		do {
		buffer[i++] = (temp_num & 1) + '0';
		num >>= 1;
	} while (num > 0);
	}

	else
	{
		do {
		buffer[i++] = (num & 1) + '0';
		num >>= 1;
	} while (num > 0);

	}

	left = 0;
	right = i - 1;

	while (left < right)
	{
		temp = buffer[left];
		buffer[left] = buffer[right];
		buffer[right] = temp;
		left++;
		right--;
	}

	buffer[i] = '\0';
	return (i);
}
