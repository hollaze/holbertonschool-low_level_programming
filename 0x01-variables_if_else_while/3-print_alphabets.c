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

char alphabet, alphabetMAJ = 'A';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

while (alphabetMAJ <= 'Z')
putchar(alphabetMAJ++);

putchar('\n');


return (0);
}
