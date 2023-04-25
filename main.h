#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x)(void)(x)
#define BUFFER_SIZE 1024

/*defining flags*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*defining sizes*/
#define S_LONG 2
#define S_SHORT 1

/**
*struct fmt - THE STRUCT OPERATION
*@fmt: this is the format
*@fn: the functions association
*/

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
*typedef struct fmt fmt_t - the struct operation
*@fmt: the format
*@fmt_t: the functions association
*/
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int (*check_specifier(const char *))(va_list);
int print_hex_value(unsigned char value);
int print_unsigned_helper(unsigned int num, int base, char *digits);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/*Functions to print char and strings*/
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*functions to print numbers*/
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],
	char buffer[], int flags, char flag_ch,
	int width, int precision, int size);

/*Functios we will use to print unprintable characters*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Functions we will use to print in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Functions for width handling*/
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
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
