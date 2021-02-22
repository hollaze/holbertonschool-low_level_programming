#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 * @s: string
 * @b: char
 * @n: unsigned int
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b; /* For every index of s (i) elmeent = b */
	}

return (s);

}
