#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers0, numbers1;

	for (numbers0 = 0; numbers0 <= 8; numbers0++)
	{
		for (numbers1 = numbers0 + 1; numbers1 <= 9; numbers1++)
		{
			putchar(numbers0 + '0');
			putchar(numbers1 + '0');

			if (numbers0 != 8  || numbers1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}	
	}
	putchar('\n');

return (0);
}
