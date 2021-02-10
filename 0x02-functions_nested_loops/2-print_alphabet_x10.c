#include "holberton.h"

/**
 * print_alphabet_x10 - Prints a to z in lowercase ten times
 */

void print_alphabet_x10(void)
{
char c;

for (int loopX10 = 0; loopX10 < 10; loopX10++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}

_putchar('\n');
}
