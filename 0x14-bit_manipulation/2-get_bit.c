#include "holberton.h"

/**
 * get_bit - transform value into bits
 * @n: number to convert
 * @index: unsigned int
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitStatus;

	/* machine got 64bits */
	if (index > 64)
		return (-1);

	bitStatus = (n >> index) & 1;

	n = bitStatus;

return (n);

}
