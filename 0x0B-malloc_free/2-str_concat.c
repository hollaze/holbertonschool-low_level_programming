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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	len = lens1 + lens2;

	ps = malloc(sizeof(char) * (len + 1));

	if (ps == NULL)
		return (NULL);


	for (i = 0; s1[i]; i++)
		ps[i] = s1[i];

	for (j = 0; s2[j]; i++, j++)
		ps[i] = s2[j];


	ps[i] = '\0';

return (ps);

}
