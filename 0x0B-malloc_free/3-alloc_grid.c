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
	int **grid = malloc(sizeof(int *) * height);
	int i, j;

	if (width <= 0 || height <= 0 ||
		grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
