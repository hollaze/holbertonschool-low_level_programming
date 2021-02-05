#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - randomize n, print n and print last digit
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

srand(time(0));
n = rand() - RAND_MAX / 2;

l = n % 10;

if (l > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}

else if (l == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l);
}

else if (l < 6 && l != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}

return (0);
}
