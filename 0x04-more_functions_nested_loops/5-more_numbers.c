#include "holberton.h"

/**
 * more_numbers - print numbers 0 to 14 ten times
 */

void more_numbers(void)
{
int numbers;
int loopX10;

for (loopX10 = 0; loopX10 < 10; loopX10++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
	if (numbers > 9)
	{
	_putchar((numbers / 10) + '0');
	}

	_putchar((numbers % 10) + '0');
}
	_putchar('\n');
}
}
