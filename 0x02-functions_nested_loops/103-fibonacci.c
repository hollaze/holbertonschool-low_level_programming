#include <stdio.h>
#include <limits.h>

/**
 * main - in the first 50 fibonacci numbers, finds and prints the sum of the even-valued terms
 * 
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
			evenValue += fSum;
	}
	printf("%i\n", evenValue);

return (0);
}
