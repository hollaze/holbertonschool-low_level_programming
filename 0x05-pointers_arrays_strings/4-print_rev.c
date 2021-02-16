#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: 'string'
 */

void print_rev(char *s)
{

	int i;
	int length;

	while (s[length] != '\0')
	{
		length++;
	} /* Length of char s */

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	} /* print char s from the end */

	_putchar('\n');

}
