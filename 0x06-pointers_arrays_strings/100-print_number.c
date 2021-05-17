#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		_putchar('-');
		number = n * -1;
	}

	if (number <= 9)
	{
		_putchar(number + '0');
	}

	if (number > 9)
	{
		print_number(number / 10);
		_putchar((number % 10) + '0');
	}
}
