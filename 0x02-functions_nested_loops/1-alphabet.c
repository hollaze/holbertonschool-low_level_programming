#include <stdio.h>

/**
 * main - Void alphabet
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

void print_alphabet(void);

return (0);
}

/**
 * print_alphabet - Prints a to z in lowercase
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

putchar('\n');
}
