#include "holberton.h"

/**
 * print_diagonal - draws diagonal line
 * @n: lines
 */

void print_diagonal(int n)
{
int i, j;

if (n > 0)
{

	for (i = 0; i < n; ++i)
	{

		for (j = 0; j < i; ++j)
		{

		_putchar(' ');

		}
	_putchar('\\');
	_putchar('\n');
	}

} /* if n>0 */

else
_putchar('\n');

}
