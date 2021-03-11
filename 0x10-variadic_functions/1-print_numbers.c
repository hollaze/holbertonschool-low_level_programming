#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with separator in between
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;

	unsigned int i;
	int numbers;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		printf("%i", numbers);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(args);

}
