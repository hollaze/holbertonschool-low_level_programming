#include <stdio.h>

/**
 * main - print 0 to 10 without using char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int base = 0;

while (base++ < 10)
putchar (base + '0');

putchar ('\n');

return (0);
}
