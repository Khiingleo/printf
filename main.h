#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int (*check_specifier(const char *))(va_list);
int print_hex_value(unsigned char value);
int print_unsigned_helper(unsigned int num, int base, char *digits);

/**
 * struct list - struct
 * @id: identifier
 * @f: pointer to function according to identifier
 */

typedef struct list
{
	char *id;
	int (*f)(va_list);
} print;

int print_char(va_list);
int print_string(va_list);
int print_cent(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_hex_upper(va_list);
int print_S(va_list);
int print_rev(va_list);
int rot13(va_list);

#endif
