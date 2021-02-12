#include <stdio.h>

/**
 * main - find prime factors of a number and divide by it
 * Return: Always 0
 */

int main(void)
{
unsigned long int number = 612852475143;
int i;

for (i = 2; number > 1; i++)
{

	if ((number % i) == 0)
	{
	number = number / i;
	}

}

printf("%u", i - 1);

return (0);

}
