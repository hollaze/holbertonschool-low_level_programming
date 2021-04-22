#include <stdio.h>
#include <limits.h>

/**
 * main - print first 50 fibonnacci numbers
 * Return: 0
 */

int main(void)
{

	int i;
	int fNum0 = 0, fNum1 = 1, fSum = 0;
	int evenValue = 0;

	for (i = 0; i < 32; i++)
	{
		fSum = fNum0 + fNum1;
		fNum0 = fNum1;
		fNum1 = fSum;

		if (fSum % 2 == 0)
		{
			/* need to modify ->   */
			evenValue += fSum;
			printf("%i", evenValue);
			if (i > 0 && i < 31)
				printf(", ");
		}
	}

	putchar('\n');

return (0);

}
