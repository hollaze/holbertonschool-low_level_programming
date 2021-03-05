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
	unsigned int i, j, lims2, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = ""; /* Empty String */

	if (s2 == NULL)
		s2 = "";


	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;


	lims2 = (n >= lens2) ? lens2 : n;

	concat = malloc((lens1 + lims2) + 1 * sizeof(char));


	if (concat == NULL)
		return (NULL);


	for (i = 0; i < lens1; i++)
		concat[i] = s1[i];

	for (j = 0; j < lims2; i++, j++)
		concat[i] = s2[j];


	concat[i] = '\0';


return (concat);

}
