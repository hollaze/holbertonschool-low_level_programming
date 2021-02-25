#include "holberton.h"

/**
 * factorial - return factorial of given number
 * @n: given number
 *
 * Return: n < 0 return -1. factorial otherwise
 */

int factorial(int n)
{

	if (n == 0)
		return (1);

	else if (n > 0)
	{
		return (n * factorial(n-1));
	}

	else
		return (-1);
}
