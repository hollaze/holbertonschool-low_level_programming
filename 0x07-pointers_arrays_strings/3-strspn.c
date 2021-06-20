#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to match with string s
 * Return: length of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	/* Because it counts the two null characters */
	return (count - 2);
}
