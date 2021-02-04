#include <stdio.h>

/**
 * main - Entry point, commentaire
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int hexadecimal = 0;

while (hexadecimal <= 9)
{
putchar(hexadecimal + '0');
hexadecimal++;
}

hexadecimal = 'a';

while (hexadecimal <= 'f')
putchar(hexadecimal++);

putchar('\n');


return (0);
}
