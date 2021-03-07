#include <stdio.h>

/**
 * string_toupper - convert lowercase letters to uppercase
 *
 * @s: string to convert
 *
 * Return: s
 */

char *string_toupper(char *s)
{

	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

return (s);

}
