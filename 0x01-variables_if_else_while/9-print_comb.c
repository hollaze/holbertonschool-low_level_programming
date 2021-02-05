#include <stdio.h>

/**
 * main - Entry point, commentaire
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int numbers;

while (numbers <= 9)
{

putchar(numbers + '0');

if (numbers <= 8)
{
putchar(',');
putchar(' ');
}

numbers++;
}

putchar('\n');

return (0);
}
