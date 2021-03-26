#include "holberton.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: string
 * Return: converted number or 0 if none
 */

unsigned int binary_to_uint(const char *b)
{

	int i;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			conv = conv * 2;

		else if (b[i] == '1')
			conv = conv * 2 + 1;

		else
			return (0);
	}

return (conv);

}
