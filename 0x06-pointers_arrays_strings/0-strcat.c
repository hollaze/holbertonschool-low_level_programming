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

	int index = 0;
	int length = 0;

	while (dest[length] != '\0')
		length++;

	while (src[index] != '\0')
	{
		dest[length] = src[index];
		length++;
		index++;
	}

	dest[length] = '\0';

	return (dest);

}
