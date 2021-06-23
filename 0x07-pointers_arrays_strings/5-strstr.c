#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: terminating \0 null bytes
 * @needle: first occurence of substring
 *
 * Return: NULL if substring not found. else substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, len = 0;

	while (needle[len] != '\0')
		len++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] == haystack[i])
		{
			j++;
		}
		if (j == len)
			break;
	}

	if (j != len)
		return (NULL);

	j = 0;
	if (len > 0)
		i -= len - 1;

	while (j < i)
	{
		j++;
		haystack++;
	}
	return (haystack);
}
