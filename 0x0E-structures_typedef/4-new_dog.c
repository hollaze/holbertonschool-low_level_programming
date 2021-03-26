#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		i++;

return (i);

}

/**
 * _strcpy - Copies string src and paste in char dest
 *
 * @dest: char destination
 * @src: char source
 *
 * Return: the pointer to dest&
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

return (dest);

}

/**
 * new_dog - create new dog struct
 *
 * @name: name member
 * @age: age member
 * @owner: owner member
 *
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *cpy_name, *cpy_owner;

	if (name == NULL || owner == NULL)
		return (0);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (0);

	cpy_name = malloc(sizeof(char) * _strlen(name) + 1);

	if (cpy_name == NULL)
	{
		free(cpy_name);
		return (0);
	}

	cpy_owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (cpy_owner == NULL)
	{
		free(cpy_name);
		free(cpy_owner);
		return (0);
	}

	_strcpy(cpy_name, name);
	_strcpy(cpy_owner, owner);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

return (my_dog);

}
