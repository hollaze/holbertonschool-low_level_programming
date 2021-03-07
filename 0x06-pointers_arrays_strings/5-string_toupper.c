#include <stdio.h>

/**
 * string_toupper - convert lowercase letters to uppercase
 *
 * @c: char to convert
 *
 * Return: c
 */

char *string_toupper(char *c)
{

	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}

return (c);

}
