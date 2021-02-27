#include "holberton.h"

/**
 * _atoi - convert string into integer
 * @s: string
 *
 * Return: if no number in string, return 0. convert otherwise
 */

int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] + '0') < 0)
			return ('-' + s[i] + '0');

		else
			return (s[i] + '0');

		return (0);
	}

}
