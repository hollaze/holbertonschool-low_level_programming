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

	char *ar;
	int i, len;

	while (str[len] != '\0')
		len++;

	ar = malloc(sizeof(char) * (len + 1));

	if (ar == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ar[i] = str[i];

return (ar);

}
