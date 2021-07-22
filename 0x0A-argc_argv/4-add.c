#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * IsNumber - check if argv is a number
 * @is_number: string
 * Return: Number
 */

int IsNumber(char *is_number)
{

	if (!isdigit(*is_number))
		return (0);

	if (*is_number == '\0')
		return (1);

	else
		return (IsNumber(is_number + 1));

}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc > 1)
	{

		for (count = 1; count < argc; count++)
		{

			if (atoi(argv[count]) == IsNumber(argv[count]))
			{
				puts("Error");
				return (1);
			}

			else
				sum += atoi(argv[count]);

		}
			printf("%d\n", sum);
	}


return (0);

}
