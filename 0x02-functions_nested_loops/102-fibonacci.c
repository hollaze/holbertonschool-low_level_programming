#include <stdio.h>

/**
 * main - print first 50 fibonnacci numbers
 * Return: 0
 */

int main(void)
{

	int fNum0 = 0, fNum1 = 1, fSum = 0, count = 50, i;

	for (i = 0; i < count; i++)
	{
		fSum = fNum0 + fNum1;
		fNum0 = fNum1;
		fNum1 = fSum;

		printf("%i, ", fSum);
	}

	putchar('\n');

return (0);

}

