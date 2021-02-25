#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{

	int len = 0, i, temp;

	while (s[len] != '\0')
		len++;

	for (i = len; i != 0 ; i--, len--)
	{
		temp = len;
		len = i;
		i = temp;

		_putchar(s[i]);
	}

	_putchar('\n');

}
