#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	unsigned long int number = 612852475143;
	int i;

	for (i = 2; number > 1; i++)
	{
		if ((number % i) == 0)
			number = number / i;
	}
	printf("%u", i - 1);
	putchar('\n');

return (0);
}
