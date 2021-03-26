#include "holberton.h"

/**
 * clear_bit - clear bits
 * @n: number
 * @index: unsigned int
 * Return: 1 if it worked, -1 if an error occurend
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

return (1);

}

