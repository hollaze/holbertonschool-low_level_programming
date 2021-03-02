#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */

int main(void)
{

	int numbers = 0, sum = 0, limit = 1023;

	while (numbers <= limit)
	{
		if (numbers % 3 == 0 || numbers % 5 == 0)
			sum += numbers;

		numbers++;

	}

	printf("%i\n", sum);

}






/*

	Add everytime there is a multiple of 3 or five, i juste liked this code but
	i understood that this is not what is asked

int main(void)
{
	int numbers, sum, multipleOfThree, multipleOfFive, limit = 1024;
	int temp, a = 0;

		for (numbers = 3; numbers < limit; numbers++)
		{

			sum = multipleOfThree + multipleOfFive;

			temp = sum;
			sum = a;		 Switch to not print same numbers
			a = temp;

			if (numbers % 3 == 0)
				multipleOfThree = numbers;

			else if (numbers % 5 == 0)
				multipleOfFive = numbers;

			if (sum != a && sum >= 3)
			{
				printf("%i", sum);
				putchar('\n');
			}
		}


return (0);
}

*/
