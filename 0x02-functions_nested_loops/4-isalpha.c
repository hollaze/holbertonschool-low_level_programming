#include <stdio.h>
#include <ctype.h>

/**
 * main - function isalpha
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int _isalpha(int c);

return (0);
}

/**
 * _isalpha - check if c is character
 * @c: character to be check
 *
 * Return: 1 if c isalpha. 0 otherwise
 */

int _isalpha(int c)
{

int true = 1, false = 0;

if (isalpha(c))
return (true);

else
return (false);
}
