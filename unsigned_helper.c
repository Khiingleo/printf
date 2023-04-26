#include "main.h"

/**
 * print_unsigned_helper - convert bases
 * @num: the number to convert
 * @base: the base to convert to
 * @digits: the digits of the base
 * Return: returns count
 */

int print_unsigned_helper(unsigned int num, int base, char *digits)
{
	int count = 0;
	int rem = num % base;

	if (num >= (unsigned int)base)
	{
		count += print_unsigned_helper(num / base, base, digits);
	}
	count += _putchar(digits[rem]);
	return (count);
}
