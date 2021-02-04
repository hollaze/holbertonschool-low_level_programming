#include <stdio.h>

/**
 * main - Entry point, print alphabet without q and e
 *
 * initialization of char alphabet
 * for loop for pritinf alphabet
 * if condition for not printing q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	if (alphabet == 'q' && alphabet == 'e')
	{
	putchar(alphabet);
	}
}
putchar('\n');

return (0);
}
