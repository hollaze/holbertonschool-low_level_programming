#include "holberton.h"

/**
 * print_triangle - print miror triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
int i, j;

if (size > 0)
{

	for (i = 1; i <= size; ++i)
	{

		for (j = 0; j <= size - 1; ++j)
		{

		if (j < (size - i))
		_putchar(' ');

		else
		_putchar('#');

		}

	_putchar('\n');
	}

}

else
_putchar('\n');

}
