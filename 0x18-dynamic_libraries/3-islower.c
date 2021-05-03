#include "holberton.h"

/**
 * _islower - check if c is lowercase character
 * @c: character to be check
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */

int _islower(int c)
{
if (c <= 'z' && c >= 'a')
return (1);

else
return (0);
}

