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
	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}	while (num > 0);

	if (is_neg)
	{	buffer[i++] = '-';
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
	}

/**
 * _printf - Printf function
 * @format: format
 * Return: Printed chars
 */
int _printf(const char *format, ...)
{
	int numOfchar = 0;
	va_list argList;

	if (format == NULL)
		return (-1);
	va_start(argList, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			numOfchar++;
		}
		else
		{
			format++;

			if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(argList, int);
				char buffer[12];
				int len;

				_itoa(num, buffer);
				len = strlen(buffer);
				write(1, buffer, len);
				numOfchar += len;
			}
			if (*format == '\0')
				break;
			if (*format == '%')
				numOfchar += write(1, format, 1);
			else if (*format == 'c')
			{
				char c = va_arg(argList, int);

				numOfchar  += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *st = va_arg(argList, char *);
				int st_len = strlen(st);

				numOfchar = numOfchar + write(1, st, st_len);
			}
		}
			format++;
	}
	va_end(argList);
	return (numOfchar);
}
