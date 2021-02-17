#include "holberton.h"

/**
 * rev_string - reverse string with a swap
 * @s: string
 */


void rev_string(char *s)
{
	int i, temp;
	int length = 0;

	while (s[length] != '\0')
		length++;

	int low_length = length - 1;

	for (i = 0; i < low_length; i++, low_length--)
	{
		temp = s[i];
		s[i] = s[low_length];
		s[low_length] = temp;

	}
}
