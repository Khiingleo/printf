#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: returns the length
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
