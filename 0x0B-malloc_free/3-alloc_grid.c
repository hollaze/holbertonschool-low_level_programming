#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - grid of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if parameters are inferior or equal to 0
 * return pointer to a 2 dimensional array otherwise.
 */

int **alloc_grid(int width, int height)
{

	int **array_2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2D = malloc(sizeof(int) * (width + height));

	if (array_2D == NULL)
		return (NULL);

	while (array_2D[height][width] != NULL)
	{
		
	}

	while (array_2D[height] != NULL)
	{
		array_2D[height] = 0;
		height++;
	}

	while (array_2D[width] != NULL)
	{
		array_2D[width] = 0;
		width++;
	}


return (array_2D);

}
