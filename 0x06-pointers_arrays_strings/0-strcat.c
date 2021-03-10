#include "holberton.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: string destination
 * @src: string source
 *
 * Return: strcat function
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int length = 0;

	while (dest[length] != '\0')
		length++;

	for (index = 0; src[index] != '\0'; index++, length++)
		dest[length] = src[index];

	dest[length] = '\0';

return (dest);
}
