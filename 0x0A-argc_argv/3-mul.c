#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	for (count = 1; count < argc; count++)
	{
		sum *= atoi(argv[count]);
	}

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", sum);

}
