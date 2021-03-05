#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{

	int *ar, i;


	if (min > max)
		return (NULL);


	ar = malloc(sizeof(int) * (max - min + 1));


	if (ar == NULL)
		return (NULL);


	for (i = 0; min <= max; min++, i++)
		ar[i] = min;


return (ar);

}
