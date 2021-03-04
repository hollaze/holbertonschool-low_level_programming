#include <holberton.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: unsigned int
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		 exit(98);

return (ptr);

}
