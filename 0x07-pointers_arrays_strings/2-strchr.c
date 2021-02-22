#include "holberton.h"
#include <stddef.h> /* To compile NULL */

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: s if first character is found. else return NULL
 */

char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}

	return (NULL);

}
