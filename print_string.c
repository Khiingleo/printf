#include "main.h"

/**
 * print_string - prints a string
 * @list: argument
 * Return: returns the count
 */

int print_string(va_list list)
{
	int count = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		count += write(1, &str[count], 1);
	}
	return (count);
}
