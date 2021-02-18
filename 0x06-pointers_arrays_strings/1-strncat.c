#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{

	int index;
        int length = 0;

        while (dest[length] != '\0')
                length++;

        for (index = 0; src[index] != '\0'; index++, length++)
        {
		if (index < n)
                dest[length] = src[index];
        }

        dest[length] = '\0';

        return (dest);

}
