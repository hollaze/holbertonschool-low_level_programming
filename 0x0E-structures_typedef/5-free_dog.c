#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  free struct
 *
 * @d: pointer to be freed
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name) = name;
		free(d->age) = age;
		free(d->owner) = owner;
	}

}
