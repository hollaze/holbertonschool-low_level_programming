#include "holberton.h"

/**
 * rev_string - reverse string with a swap
 * @s: string
 */

void rev_string(char *s)
{
	int temp = 0, i = 0;
	int max, min;

	while (s[i] != '\0')
		i++;

	for (min = 0, max = i - 1; min < max; min++, max--)
	{
		temp = s[min];
		s[min] = s[max];
		s[max] = temp;
	}
}
