#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{

		printf("%i", a[length]);

		if (length < n - 1)
			printf(", ");
	}

	putchar('\n');

}
