#include "holberton.h"

/**
 *
 * _isupper - function that check if c is in uppercase
 * @c: int to character
 * Return: 1 if c is uppercase. 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);

	_putchar('\n');
}
