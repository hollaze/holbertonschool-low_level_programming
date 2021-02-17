#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int length = 0;

	while (a[length] != '\0')
		length++;

	for (n = 0; a[n] != '\0'; n++)
	{

		printf("%i", a[n]);

		if (n <= length - 2)
			printf(", ");
	}

	putchar('\n');

}
