#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
