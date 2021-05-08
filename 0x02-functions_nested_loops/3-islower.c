#include "holberton.h"

/**
 * _islower - check if c is lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */

int _islower(int c)
{
    if (c <= 'z' && c >= 'a')
        return (1);

    return (0);
}
