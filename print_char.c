#include "main.h"

/**
 * print_char - prints a character
 * @list: argument
 * Return: returns the count
 */

int print_char(va_list list)
{
	int count = 0;
	char c = (char)va_arg(list, int);

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}

	return (0);
}
