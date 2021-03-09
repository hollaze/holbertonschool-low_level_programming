#include <stdio.h>

/**
 * free_dog -  free struct
 *
 * @d: 
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d)->name = name;
		free(d)->age = age;
		free(d)->owner = owner;
	}

}
