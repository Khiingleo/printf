#include "main.h"

/**
 * _printf - custom made printf
 * @format: argument
 * Return: returns the number of times character were printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int (*f)(va_list);
	unsigned int i = 0, count = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			f = check_specifier(&format[i + 1]);

			if (f != NULL)
			{
				count += f(list);
				i++;
			}
			else
			{
				write(1, &format[i], 1);
				count++;
			}
		}

		i++;
	}

	va_end(list);

	return (count);
}
