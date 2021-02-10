#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to be check
 *
 * Return: -1 if n is less than 0 -- 0 if n is 0 -- 1 if n is greater than 0
 */

int print_sign(int n)
{
char c;

if (n > 0)
{
c = '+';
_putchar(c);
return (1);
}

else if (n == 0)
{
c = '0';
_putchar(c);
return (0);
}

else
{
c = '-'
_putchar(c);
return (-1);
}

}
