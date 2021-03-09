#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new dog struct
 *
 * @name: name member
 * @age: age member
 * @owner: owner member
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *cpy_name, *cpy_owner;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	cpy_name = malloc(sizeof(char) * strlen(name) + 1);

	if (cpy_name == NULL)
		return (NULL);

	cpy_owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (cpy_owner == NULL)
		return (NULL);

	strcpy(cpy_name, name);
	strcpy(cpy_owner, owner);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

return (my_dog);

}
