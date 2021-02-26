#include "holberton.h"

/**
 * _strlen_recursion - return len with recursion
 * @s: string
 *
 * Return: return length of a string
 */

int _strlen_recursion(char *s)
{

	if (s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));

}
