#include "holberton.h"

char *replace(char *rep)
{

	char *s = 

return (rep);

}

/**
 * leet - encode string into 1337
 * Return: string encoded
 */

char *leet(char *s)
{
	int i = 0;

	/*while (*s >= 'z' && *s <= 'a' && s[i] != '\0')
	{
		if (*s)
		{
		s[i] == 'a' == '4';
		s['A'] = s['4'];
		s['e'] = s['3'];
		s['E'] = s['3'];
		s['o'] = s['0'];
		s['O'] = s['0'];
		s['t'] = s['7'];
		s['T'] = s['7'];
		s['l'] = s['1'];
		s['L'] = s['1'];
		}
		i++;
	}*/

	while (*s >= 'z' && *s <= 'a' && s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';

		i++;
	}

return (s);

}
