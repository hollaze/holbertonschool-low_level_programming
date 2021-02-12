#include <stdio.h>

/**
 * main - print numbers from 1 to 100. Fizz multiple by 3. Buzz multiple by 5.
 * Return: Always 0
 */

int main(void)
{
int i;


	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
		printf("Fizz");
		putchar(' ');
		}

		else if (i % 5 == 0 && i <= 100)
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

	putchar('\n');
}
