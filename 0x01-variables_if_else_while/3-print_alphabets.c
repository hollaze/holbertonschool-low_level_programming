#include <stdio.h>

/**
 * main - Entry point, print alphabet in min and maj
 *
 * initialization of min and maj alphabet
 * for loop -> print min alphabet
 * nested for loop -> print maj alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char alphabet, alphabetMAJ;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
for (alphabetMAJ = 'A'; alphabetMAJ <= 'Z'; alphabetMAJ++)
	putchar(alphabetMAJ);
}

return (0);
}
