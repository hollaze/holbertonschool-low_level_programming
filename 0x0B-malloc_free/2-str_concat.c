#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string destination
 * @s2: string source
 *
 * Return: NULL on failure, s1 otherwise
 */

char *str_concat(char *s1, char *s2)
{

	int i, j, lens1 = 0, lens2 = 0, len;
	char *ps;

	if (s1 == NULL || s2 == NULL)
		return ("");

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	len = lens1 + lens2;

	ps = malloc(sizeof(char) * (len + 1));

	if (ps == NULL)
		return (NULL);


	for (i = 0; i < lens1; i++)
		ps[i] = s1[i];

	for (j = 0; j < lens2; i++, j++)
		ps[i] = s2[j];


	ps[i] = '\0';

return (ps);

}
