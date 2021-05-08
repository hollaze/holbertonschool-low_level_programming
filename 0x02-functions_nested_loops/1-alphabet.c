#include "holberton.h"

/**
 * print_alphabet - Prints a to z in lowercase
 */

void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        _putchar(c);
    _putchar('\n');
}
