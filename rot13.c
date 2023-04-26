#include "main.h"

/**
 * rot13 - converts a string into rot13
 * @list: argument
 * Return: returns the count
 */

int rot13(va_list list)
{
	int i, j, count = 0;
	char *str = va_arg(list, char *);
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A';
			_putchar(rot13[j]);
			count++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a' + 26;
			_putchar(rot13[j]);
			count++;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
