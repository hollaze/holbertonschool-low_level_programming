#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (alphabet[j] != '\0')
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}

return (s);
}
