#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string
 */

void rev_string(char *s)
{
	int i, length;

	while (s[length] != '\0')
	{
		length++;
	} /* take s length, equivalent of sizeof */

	for (i = length -1; i >= 0; i--)
	{
		_putchar(s[i]);
	} /* take s out */

}
