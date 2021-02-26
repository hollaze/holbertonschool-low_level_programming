#include "holberton.h"

/**
 * _pow_recursion - return value of x raised by pow of y
 * @x: value to be powered
 * @y: power
 *
 * Return: -1 if y < 0. x raised by y otherwise
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

		/* n * factorial(n - 1); */
		return (x * _pow_recursion(x, (y - 1)));


}
