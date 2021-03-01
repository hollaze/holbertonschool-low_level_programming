#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc > 1)
	{

		for (count = 1; count < argc; count++)
		{
			sum += atoi(argv[count]);
		}


		if (!isdigit(argv[count]))
			printf("%d\n", sum);

		else
		{
			puts("Error");
			return (1);
		}

	}


return(0);

}
