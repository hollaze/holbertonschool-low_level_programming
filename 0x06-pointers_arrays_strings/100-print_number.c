#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: number to print
 */

void print_number(int n)
{
	int number = 0;

	if (n < 0)
	{
		_putchar('-');
		number -= n;
	}

	if (n / 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
