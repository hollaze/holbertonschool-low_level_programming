#include "search_algos.h"

/**
 * print_array - print the array
 * @array: array to print
 * @left: left side to print
 * @right: right side to print
 * Return: None
 */

void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%d, ", array[left]);
		left++;
	}
	printf("%d\n", array[right]);
}

/**
 * binary_search -  searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: Index, if error return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);
	
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
