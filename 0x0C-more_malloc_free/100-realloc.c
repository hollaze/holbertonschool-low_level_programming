#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory block
 *
 * @ptr: pointer
 * @old_size: size to replace
 * @new_size: new size in bytes
 *
 * Return: NULL if ptr is null if new size == old size return ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *p, *p1;
	unsigned int i;

	p1 = ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}


	p = malloc(new_size);

	if (p == NULL)
		return (NULL);


	if (new_size > old_size)
	{

		for (i = 0; i <= old_size; i++)
			p[i] = p1[i];

	}

	free(ptr);

return (p);

}
