#include <stdio.h>
#include <stdlib.h>

/**
 * main - count minimum number of coins to make a change
 * @argc: number of argument
 * @argv: argument passed into console
 * Return: 1 if there is an error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int coin_list[5] = {25, 10, 5, 2, 1};
	int j = 0, i = 0, min_change = 0, change = atoi(argv[1]);

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	else if (change < 0)
		printf("0\n");

	for (j = 0; argv[1][j]; j++)
	{
		if (argv[1][j] < '0' || argv[1][j] > '9')
		{
			puts("Error");
			return (1);
		}
	}

	for (i = 0; i < 5; i++)
	{
		while (change - coin_list[i] >= 0)
		{
			change -= coin_list[i];
			min_change += 1;
		}
	}

	printf("%d\n", min_change);

	return (0);
}
