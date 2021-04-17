#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all first letters of a word in a string
 * separators: , ; . ! ? " ( ) { } \t \n ' '
 * @s: string to capitalize
 * Return: string capitalized
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char *separators = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		while (separators[j] != '\0')
		{
			if (s[i - 1] == separators[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
			j++;
		}
		i++;
		j = 0;
	}

return (s);
}


