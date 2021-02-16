#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string
 */

void rev_string(char *s)
{
	char temp;
	int i, j, length;

	while (s[length] != '\0')
	{
		length++;
	} /* take s length, equivalent of sizeof */

	for (i = 0, j = length - 1; i < j; ++i, --j)
	{

		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

	}

}
