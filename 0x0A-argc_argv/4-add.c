#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * IsNumber - check if argv is a number
 * @isNumber: string
 *
 */

int IsNumber(char  *isNumber)
{

	if (!isdigit(*isNumber))
		return (0);

	if (isNumber == '\0')
		return (1);

	else
		return (IsNumber(isNumber + 1));

}

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
