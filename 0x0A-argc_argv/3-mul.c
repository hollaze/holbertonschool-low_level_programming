#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count, sum = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			sum *= atoi(argv[count]);
		}
	}

	else if (argc < 1)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", sum);

}
