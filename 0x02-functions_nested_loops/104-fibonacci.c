#include <stdio.h>
#include <limits.h>

/**
 * main - print first 50 fibonnacci numbers
 * Return: 0
 */

int main(void)
{

	size_t count = 98, i;
	size_t fNum0 = 0, fNum1 = 1, fSum = 0;

	for (i = 0; i < count; i++)
	{
		fSum = fNum0 + fNum1;
		fNum0 = fNum1;
		fNum1 = fSum;

		printf("%zu", fSum);

		if (i < 97)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

return (0);

}

