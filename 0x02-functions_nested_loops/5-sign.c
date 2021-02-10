#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to be check
 *
 * Return: -1 if n is less than 0 -- 0 if n is 0 -- 1 if n is greater than 0
 */

int print_sign(int n)
{

int greater = 1, isZero = 0, less = -1;

if (n > 0)
return (greater);

else if (n == 0)
return (isZero);

else
return (less);

}
