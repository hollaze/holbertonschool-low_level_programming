#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: integer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int len = 0;

	while (len < n)
	{
		printf("%i", a[len]);

		if (len < n - 1)
			printf(", ");

		len++;
	}
	putchar('\n');
}
