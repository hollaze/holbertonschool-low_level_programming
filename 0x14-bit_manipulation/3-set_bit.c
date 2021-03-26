#include "holberton.h"

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: given value
 * @index: unsigned int
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{


	if (index > 64)
		return (-1);

	*n = (1 << index) | *n;

return (1);

}
