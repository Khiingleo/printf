#include "main.h"

/**
 * print_S - prints a string
 * @list: argument
 * Return: returns the count
 */

int print_S(va_list list)
{
	int count = 0, i;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hex_value((unsigned char)str[i]);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}

/**
 * print_hex_value - gets hex value
 * @value: the value
 * Return: returns count
 */

int print_hex_value(unsigned char value)
{
	int count = 0, i;
	char hex_digits[] = "0123456789ABCDEF";
	char hex_value[3];

	hex_value[0] = hex_digits[value >> 4];
	hex_value[1] = hex_digits[value & 0x0F];
	hex_value[2] = '\0';

	for (i = 0; i < 2; i++)
	{
		count += _putchar(hex_value[i]);
	}

	return (count);
}
