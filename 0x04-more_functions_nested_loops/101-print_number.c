#include "holberton.h"

/**
 * print_number - print any number without using printf
 * @n: number used
 */

void print_number(int n)
{
	int pow = 1;
	unsigned int nb;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}

	else
		nb = n;

	while (nb / pow > 9)
		pow *= 10;

	while (pow != 0)
	{
		_putchar((nb / pow) + '0');

		nb %= pow;
		pow /= 10;
	}
}
