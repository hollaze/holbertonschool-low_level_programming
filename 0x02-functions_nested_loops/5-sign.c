#include <stdio.h>
#include <ctype.h>

/**
 * main - printing number sign
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int print_sign(int n);

return (0);
}

/**
 * print_sign - print the sign of a number
 * @n: the number to be check
 *
 * Return: -1 if n is less than 0 -- 0 if n is 0 -- 1 if n is greater than 0
 */

int print_sign(int n)
{

int greater = 1, isZero = 0, less = -1;

if (n > 0)
{
putchar(ispunct(n));
return (greater);
}

else if (n == 0)
{
putchar(ispunct(n));
return (isZero);
}

else
{
putchar(ispunct(n));
return (less);
}

}
