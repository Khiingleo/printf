#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @list: argument
 * Return: returns count
 */

int print_unsigned(va_list list)
{
	unsigned int num;
	int count = 0;

	num = va_arg(list, unsigned int);
	count = print_unsigned_helper(num, 10, "0123456789");
	return (count);
}

/**
 * print_octal - prints an octal
 * @list: argument
 * Return: returns count
 */

int print_octal(va_list list)
{
	int count = 0;
	unsigned int num;

	num = va_arg(list, unsigned int);
	count = print_unsigned_helper(num, 8, "01234567");
	return (count);
}

/**
 * print_hex - prints a hex
 * @list: argument
 * Return: returns count
 */

int print_hex(va_list list)
{
	int count = 0;
	unsigned int num;

	num = va_arg(list, unsigned int);
	count = print_unsigned_helper(num, 16, "0123456789abcdef");
	return (count);
}

/**
 * print_hex_upper - prints a hex in uppercase
 * @list: argument
 * Return: returns the count
 */

int print_hex_upper(va_list list)
{
	int count = 0;
	unsigned int num;

	num = va_arg(list, unsigned int);
	count = print_unsigned_helper(num, 16, "0123456789ABCDEF");
	return (count);
}
