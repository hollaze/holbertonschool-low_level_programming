#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int numbers, loopX10;

	for (loopX10 = 0; loopX10 < 10; loopX10++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
				_putchar((numbers / 10) + '0');

			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
