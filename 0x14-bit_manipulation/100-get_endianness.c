#include "holberton.h"

/**
 * get_endianness - check the endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

return ((int) *c);
}
