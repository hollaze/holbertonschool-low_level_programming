#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: maximum number of characters to be appended
 *
 * Return: fail = Return NULL. return pointer otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *concat;
	unsigned int i, limits2, lens1, lens2;

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	concat = malloc((lens1 + 1) * sizeof(char));

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	limits2 = (n < lens2) ? n : lens2;

	for (i = 0; i < n; i++)
		concat[i] = s1[i];

	for (i = 0; i < limits2; i++)
		concat[i] = s2[i];

	if (concat == NULL)
		return (NULL);

return (concat);

}
