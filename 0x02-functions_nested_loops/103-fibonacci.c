#include <stdio.h>
#include <limits.h>

/**
 * main - print first 50 fibonnacci numbers
 * Return: 0
 */

int main(void)
{

	int count = 50, i;
	long int fNum0 = 0, fNum1 = 1;
	long int fSum = 0, long int limit = 4000000;

	for (i = 0; fSum <= limit; i++)
	{
		fSum = fNum0 + fNum1;
		fNum0 = fNum1;
		fNum1 = fSum;

		if (fSum % 2 == 0)
			printf("%li", fSum);

		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

return (0);

}
