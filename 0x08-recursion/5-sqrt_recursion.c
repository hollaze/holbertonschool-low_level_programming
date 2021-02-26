#include "holberton.h"

/**
 * _pow - find square power of n
 * @x: square power of n
 * @n: square root to be returned
 *
 * Return: natural square power of n
 */

int _pow(int n, int x)
{

	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_pow(n, x + 1));

}

/**
 * _sqrt_recursion - return natural square root of number
 * @n: number
 *
 * Return: -1 if n does not have sqrt root. sqrt root otherwise
 */

int _sqrt_recursion(int n)
{

	if (n < 1)
		return (-1);

	return (_pow(n, 0));

}
