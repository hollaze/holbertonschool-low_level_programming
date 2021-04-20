#include <stdio.h>
#include <limits.h>

/**
 * main - print first 50 fibonnacci numbers
 * Return: 0
 */

int main(void)
{

	int count = 0, i;
	int fNum0 = 0, fNum1 = 1, evenValue = 0;
	int fSum = 0, limit = 4000000;

	for (i = 0; fSum <= limit; i++)
	{
		fSum = fNum0 + fNum1;
		fNum0 = fNum1;
		fNum1 = fSum;

		if (fSum % 2 == 0)
		{
			evenValue += fSum;
			printf("%i", evenValue);
			count++;
		}

		if (i < count - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

return (0);

}
