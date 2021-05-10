#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: variable to check
 * Return: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * _atoi - convert a string into integer
 * @s: string
 *
 * Return: if no number in string, return 0. convert otherwise
 */

int _atoi(char *s)
{
	unsigned int total = 0;
	int i, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (_isdigit(s[i]))
		{
			total = (total * 10) + (s[i] - '0');
			if (!_isdigit(s[i + 1]))
				break;
		}
	}

	total *= sign;

	return (total);
}
