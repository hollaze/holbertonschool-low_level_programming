#include "holberton.h"

/**
 * rev_string - reverse string with a swap
 * @s: string
 */


void rev_string(char *s)
{
	int temp = 0;
	int index = 0;

	while (s[index] != '\0')
		index++;

	int max = 0;
	max = index - 1; /* End of s */
	int min;	     /* Begining of s */

	for (min = 0; min < max; min++)
	{
		temp = s[min];
		s[min] = s[max];
		s[max] = temp;

		max--;
	}
}
