#include "holberton.h"

/**
 * print_line - draws line in terminal
 * @n: the number of times de character _ should be printed
 */

void print_line(int n)
{

int loop;

if (n > 0)
{

for (loop = 0; loop <= n; loop++)
{

_putchar('_');

} /* for loop */
} /* if loop */

}
