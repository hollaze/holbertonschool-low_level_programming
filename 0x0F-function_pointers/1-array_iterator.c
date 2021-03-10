#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as parameter on each element of an array
 *
 * @array: pointer to int
 * @size: size of array
 * @action: pointer to function returning int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long len = 0;

	if (array == NULL || !size || action == NULL)
		return;

	while (len < size)
	{
		action(array[len]);
		len++;
	}


}
