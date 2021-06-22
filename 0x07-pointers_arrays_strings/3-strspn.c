#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to match with string s
 * Return: length of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0, len = 0;

	while (accept[len] != '\0')
		len++;

	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}

	if (count >= 1)
	{
		count += 1;
		return (count);
	}
	else
		return (0);
}
