#include "holberton.h"

/**
 * _isdigit - check if c is digit
 * @c: the variable to be check
 * Return: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);

	return (0);
}
