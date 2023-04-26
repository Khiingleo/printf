#include "main.h"

/**
 * print_rev - reverses a string
 * @list: argument
 * Return: returns count
 */

int print_rev(va_list list)
{
	int count = 0, i, len;

	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
	{
		count += _putchar(str[i]);
	}

	return (count);
}
