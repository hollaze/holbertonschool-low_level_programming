#include "holberton.h"

/**
 * leet - encode string into 1337
 * @s: string to encode
 * Return: string encoded
 */

char *leet(char *s)
{
	int i = 0, j = 0;

	char *letters = "aAeEoOtTlL";
	char *l33t = "4433007711";

	while (s[i] != '\0')
	{
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = l33t[j];
			j++;
		}
		j = 0;
		i++;
	}

return (s);
}
