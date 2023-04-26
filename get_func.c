#include "main.h"

/**
 * check_specifier - checks the specifier and returns
 * function pointer
 * @format: the format specifier
 * Return: returns the function pointer to the format specified
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	print keys[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_cent},
		{"i", print_integer},
		{"d", print_integer},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex_upper},
		{"S", print_S},
		{"r", print_rev},
		{"R", rot13},
		{NULL, NULL}
	};

	for (i = 0; keys[i].id != NULL; i++)
	{
		if (*(keys[i].id) == *format)
			return (keys[i].f);
	}

	return (NULL);
}
