#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer to newly allocated space in memory
 *
 * @str: string
 *
 * Return: return NULL if *str == NULL
 */

char *_strdup(char *str)
{

	char *sdup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	sdup = malloc(sizeof(char) * (len + 1));

	if (sdup == NULL || sdup < str)
		return (NULL);

	for (i = 0; i < len; i++)
		sdup[i] = str[i];


return (sdup);

}
