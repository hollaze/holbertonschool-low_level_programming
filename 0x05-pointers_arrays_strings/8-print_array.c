#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer
 * @n: integer
 */

void print_array(int *a, int n)
{

	for (n = 0; a[n] != '\0'; n++)
	{

		printf("%i, ", a[n]);

	}

	putchar('\n');

}
