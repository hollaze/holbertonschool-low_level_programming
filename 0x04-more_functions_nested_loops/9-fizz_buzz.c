#include <stdio.h>

/**
 * main - print numbers from 1 to 100; print Fizz if a multiple by 3; print Buzz if multiple by 5.
 * Return: Always 0
 */

int main(void)
{
int i, j, x;


	for (i = 1; i <= 100; i++)
	{

	if (i % 3 == 0)
	{
	printf("Fizz");
	putchar(' ');
	}

	else if (i % 5 == 0 && i < 100)
	{
	printf("Buzz");
	putchar(' ');
	}

	else
	{
	printf("%u", i);
	putchar(' ');
	}

	}

}
