#ifndef DOG_HEADER
#define DOG_HEADER
typedef struct dog dog_t;

/**
 * struct dog - contain members
 *
 * @name: name member
 * @age: age member
 * @owner: owner member
 */

	struct dog
	{
		char *name;
		float age;
		char *owner;
	};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
