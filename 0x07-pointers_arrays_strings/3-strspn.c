#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: length of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{

	int i;

	for (i = 0; s[i] != '\0' && accept[i] != s[i]; i++)
	{
		if (accept[i] == '\0')
			return (i);
	}

	return (i);

}
