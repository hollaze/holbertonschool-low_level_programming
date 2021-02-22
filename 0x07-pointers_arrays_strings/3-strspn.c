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

	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);

			i++;
			j++;

		}
	}

	return (i);

}
