#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of a and b
 *
 * @a: int
 * @b! int
 *
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - multiplication of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: a*b
 */

int op_mul(int a , int b)
{
	return (a * b);
}

/**
 * op_sub - division of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: a/b
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	return (0);
}

/**
 * op_sub - multiplication of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: a%b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	return (0);
}
