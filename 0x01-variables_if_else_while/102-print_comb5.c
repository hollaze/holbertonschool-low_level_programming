#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers0, numbers1;

	for (numbers0 = 0; numbers0 <= 98; numbers0++)
	{
		for (numbers1 = numbers0 + 1; numbers1 <= 99; numbers1++)
		{
			putchar(numbers0 / 10 + '0');
			putchar(numbers0 % 10 + '0');
			putchar(' ');
			putchar(numbers1 / 10 + '0');
			putchar(numbers1 % 10 + '0');

			if (numbers0 != 98 || numbers1 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

return (0);
}
