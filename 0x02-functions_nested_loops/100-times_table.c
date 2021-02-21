#include "holberton.h"

/**
 * print_times_table - print times tables
 * @n: integer
 */

void print_times_table(int n)
{
	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		if (n >= 0 && n <= 15)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (result <= 9)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
				else if (result > 9 && result <= 99)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10 % 10) + '0');
					_putchar((result % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
