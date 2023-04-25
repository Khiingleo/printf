#include "main.h"

void print_buffer(char buffer[], int *buff_ind);
/**
*_printf - is the printf function
*@format: is the format
*Return: this program whould return the printed characters
*/
int _printf(const char *format, ...)
{
	int i, printed = 0, printed chars = o;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;

	char buffer[BUFF_SIZE];
	if (format == NULL)
		return (-1);
	
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);

			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;

			printed = handle_print(format, &i, list, buffer,
			width, flags, precision, size);

			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
*print_buffer - a function that prints buffer
*@buffer: this buffer is an array
*@buff_ind: is an index
*/
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
