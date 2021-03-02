#include <stdio.h>

/**
 * main - print first 50 fibonnacci numbers
 * Return: 0
 */

int main(void)
{

	int count = 50, i;
	long int fNum0 = 0, fNum1 = 1;
	long long int fSum = 0;

	for (i = 0; i < count; i++)
	{
		fSum = fNum0 + fNum1;
		fNum0 = fNum1;
		fNum1 = fSum;

		printf("%lli", fSum);

		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

return (0);

}

