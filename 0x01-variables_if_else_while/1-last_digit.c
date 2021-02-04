#include <stdio.h>

/**
 * main - Entry point, randomize n, print n and print last digit
 *
 * initialization of int and and l
 * changing l value to detect last digit
 * randomizing n value
 * If conditions of n
 *
 * Return: 0 Always (Success)
 */

int main(void)
{

int n, l;
l = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, l);
}

else if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, l);
}

else if (n < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
}

return (0);
}
