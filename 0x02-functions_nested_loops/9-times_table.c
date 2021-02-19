#include "holberton.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{

	int column, horizontal; /* Index */
	int row = 10; /* Limit value */
	int result;

	for (column = 0; column < row; column++)
	{
		for (horizontal = 0; horizontal < row; horizontal++)
		{
			result = column * horizontal;


			if (result <= 9)
			{
				if (horizontal > 0)
					_putchar(' ');

				_putchar(result + '0');
			}


			else if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}


			if (horizontal < 9)
			{
				_putchar(',');
				_putchar(' ');
			}


		}

		_putchar('\n');

	}

}
