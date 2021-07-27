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
	int **grid = malloc(sizeof(int *));
	int w, h;

	if (width <= 0 || height <= 0 ||
		grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int));
		if (grid[h] == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
