#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = (length + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
