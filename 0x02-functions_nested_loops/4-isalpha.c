#include "holberton.h"

/**
 * _isalpha - check if c is an alphabetic character
 * @c: character to check
 *
 * Return: 1 if c isalpha. 0 otherwise
 */

int _isalpha(int c)
{
    if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
        return (1);

    return (0);
}
