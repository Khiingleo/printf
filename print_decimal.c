#include "main.h"

/**
 * print_integer - prints an integer
 * @list: argument
 * Return: returns the count
 */

int print_integer(va_list list)
{
	int n = va_arg(list, int);
	int num_digits = 0;
	int divisor = 1;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	do {
		count += _putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
		num_digits++;
	} while (divisor != 0);

	return (count);
}
