#include "holberton.h"

/**
 * rev_string - reverse string with a swap
 * @s: string
 */


void rev_string(char *s)
{
	int temp = 0;
	int index = 0;
	int max, min;
	max = index - 1;

	while (s[index] != '\0')
		index++;

	for (min = 0; min < max; min++)
	{
		temp = s[min];
		s[min] = s[max];
		s[max] = temp;

		max--;
	}
}
