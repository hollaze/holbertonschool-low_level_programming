#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: length of matching characters
 *
 * Return: number of bytes in the initial segment of s wich consist onlu of bytes from accept
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
