#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to match with string s
 * Return: length of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[i] == '\0')
				return (i);
		}
		i++;
	}
		return (i);
}
