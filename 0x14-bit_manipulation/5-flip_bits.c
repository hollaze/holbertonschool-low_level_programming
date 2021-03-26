#include "holberton.h"

/**
 * countSetBits - count number of set bits
 * @n: number
 * Return: count
 */

int countSetBits(int n)
{

	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}

return (count);

}

/**
 * flip_bits - flip one number to another
 * @n: given number
 * @m: mask
 * Return: number of bits needed to flip one number
 * to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int result;

	result = n ^ m;

return (countSetBits(result));

}
