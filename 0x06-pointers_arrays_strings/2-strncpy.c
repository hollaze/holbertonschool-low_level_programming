#include "holberton.h"

/**
 * _strncpy - copy n characters
 *
 * @dest: string destination
 * @src: string source
 * @n: copy character limitation
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

return (dest);
}
