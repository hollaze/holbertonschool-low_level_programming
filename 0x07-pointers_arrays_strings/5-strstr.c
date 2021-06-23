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

	if (len == 0)
		return (NULL);

	/*finding needle in haystack -> for loop comparison -> nested loops (2) -> compare elements of haystack & elements of needle*/
	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] == haystack[i])
		{
			j++;
		}
		/*if they all good -> break*/
		if (j == len)
			break;
	}

	/*if found -> index of haystack - len of needle  -> gives pointer to beginning of located string*/

	if (j != len)
		return (NULL);

	/*haystack have to increment to its index that have been substrated by len of needle -> while (*haystack < idx) -> haystack++;*/
	j = 0;
	while (j < i)
	{
		j++;
		haystack++;
	}
	/*return pointer to beginning of located substring -> pointer to haystack -> or NULL if not found*/
	return (haystack);
}
