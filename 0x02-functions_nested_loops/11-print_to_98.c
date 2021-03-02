#include <stdio.h>

/**
 * print_to_98 - Print numbers from 0 to 98
 * @n: int
 */

void print_to_98(int n)
{

	while (n < 98)
	{

		printf("%d", n);

		putchar(',');
		putchar(' ');

		n++;
	}

	for (; n > 98; n--)
	{

		printf("%d", n);

		putchar(',');
		putchar(' ');

	}

	if (n == 98)
		printf("%d", n);

	putchar('\n');

}
