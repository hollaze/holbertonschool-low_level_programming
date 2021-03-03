#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL if size=0.
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
		return (NULL);

/*	if (ar == NULL)
		return (NULL); */

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
