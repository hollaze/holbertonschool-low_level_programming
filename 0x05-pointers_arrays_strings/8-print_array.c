#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int length = 4;

	for (n = 0; n <= length; n++)
	{

		printf("%i", a[n]);

		if (n <= length - 1)
			printf(", ");
	}

	putchar('\n');

}
