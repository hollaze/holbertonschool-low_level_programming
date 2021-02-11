#include "holberton.h"

/**
 * print_numbers - function print numbers: 0 to 9; followed by new line
 */

void print_numbers(void)
{

int numbers;

for (numbers = 0; numbers <= 9; numbers++)
{
	_putchar(numbers + '0');
}
	_putchar('\n');

}
