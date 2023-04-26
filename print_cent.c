#include "main.h"

/**
 * print_cent - print % sign
 * @list: argument
 * Return: the count
 */

int print_cent(va_list __attribute__((unused)) list)
{
	int count = 0;
	char c = '%';

	count += write(1, &c, 1);
	return (count);
}
