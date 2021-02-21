#include <stdio.h>

/**
 * print_to_98 - Print numbers from 0 to 98
 * @n: int
 */

void print_to_98(int n)
{

	while (n < 99)
	{

		printf("%d", n);

		if (n < 98)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');

}
