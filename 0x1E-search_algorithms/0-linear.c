#include <stdio.h>

/**
 * linear_search - searches for a value in an array
 * of integers using the linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to return
 * Return: index at which value is found, if error return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
