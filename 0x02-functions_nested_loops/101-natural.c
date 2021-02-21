#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */

int main(void)
{
	int numbers, sum, multipleOfThree, multipleOfFive, limit = 1024;

	for (numbers = 0; numbers < limit; numbers++)
	{

		sum = multipleOfThree + multipleOfFive;

		if (numbers % 3 == 0)
			multipleOfThree = numbers;

		if (numbers % 5 == 0)
			multipleOfFive = numbers;


		printf("%i", sum);
		putchar('\n');

	}

return (0);
}
