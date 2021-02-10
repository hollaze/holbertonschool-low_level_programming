#include "holberton.h"

/**
 * print_alphabet_x10 - Prints a to z in lowercase ten times
 */

void print_alphabet_x10(void)
{
char alphabet;

for (int loopX10 = 0; loopX10 < 10; loopX10++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
}

_putchar('\n');
}
