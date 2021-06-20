#include "holberton.h"
#include <stdlib.h>

/**
 * _strpbrk - locates first occurence in string s of
 * any bytes in string accept
 * @s: string to check
 * @accept: string to match with string s
 * Return: s if it matches, NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return (NULL);
}
