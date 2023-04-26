#include "main.h"

/**
 * print_binary - prints a binary
 * @list: argument
 * Return: the count
 */

int print_binary(va_list list)
{
	int count = 0, j;
	unsigned int num = va_arg(list, unsigned int);
	int bin[32];
	int i = 0;

	while (num > 0)
	{
		bin[i] = num % 2;
		num /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(bin[j] + '0');
	}

	return (count);
}
