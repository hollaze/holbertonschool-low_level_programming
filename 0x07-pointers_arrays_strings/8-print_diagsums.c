#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of
 * the two diagonals of a square matrix of integers
 * using only one pointer
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int res_order, res_reverse, i = 0, j = 0, size_count = size;

	res_order = *(a + i);

	for (i = 1; i < size; i++, size_count += size)
	{
		res_order += *(a + i + size_count);
	}

	res_reverse = *(a + size - 1);
	j = size_count = size - 1;

	for (; j > 0; j--, size_count += size)
	{
		res_reverse += *(a + j + size_count);
	}

	printf("%d, %d\n", res_order, res_reverse);

	/*printf("%d\n", res);*/
}
