#include <stdio.h>

/**
 * main - de 0 à 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char base = '0';
char nine = '9';

while (base <= nine)
putchar(base++);

putchar('\n');

return (0);
}
