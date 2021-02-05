#include <stdio.h>

/**
 * main - nested loops 012 to 789
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int numbers0, numbers1, numbers2;

for (numbers0 = 0; numbers0 <= 7; numbers0++)
{

for (numbers1 = numbers0 + 1; numbers1 <= 8; numbers1++)
{

for (numbers2 = numbers1 + 1; numbers2 <= 9; numbers2++)
{

	putchar(numbers0 + '0');
	putchar(numbers1 + '0');
	putchar(numbers2 + '0');

	if (numbers0 != 7  || numbers1 != 8 || numbers2 != 9)
	{
	putchar(',');
	putchar(' ');
	}
}
}
}
	putchar('\n');

return (0);
}
