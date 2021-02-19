#include "holberton.h"

/**
 * print_last_digit - function that print the last digit
 * @a: int to be chek
 *
 * Return: last digit of int a
 */

int print_last_digit(int a)
{
	int last_digit = a;
	last_digit = last_digit % 10;

	if (last_digit < 0)
		last_digit = last_digit * (- 1);

	_putchar(last_digit + '0');

return (last_digit);

}
