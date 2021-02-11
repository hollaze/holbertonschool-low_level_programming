#include "holberton.h"

/**
 * print_most_numbers - print number 0 to 9 except to and 4
 */

void print_most_numbers(void)
{
int numbers;

for (numbers = 0; numbers <= 9; numbers++)
{
	if (numbers == 2 || numbers == 4)
	continue;

	else
	_putchar(numbers + '0');
}
	_putchar('\n');
}
