#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints n numbers of strings
 *
 * @separator: separator between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list args;

	unsigned int i;
	char *str, *nil = "(nil)";


	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("%s", nil);

		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(args);

}
