#include <stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char base = '0', nine = '9';

    while (base <= nine)
        putchar(base++);

    putchar('\n');

return (0);
}
