#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog and returns NULL upon failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int x, kname, kowner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (kname = 0; name[kname]; kname++)
		;

	for (kowner = 0; owner[kowner]; kowner++)
		;

	n_dog->name = malloc(kname + 1);
	n_dog->owner = malloc(kowner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (x = 0; x < kname; x++)
		n_dog->name[x] = name[x];
	n_dog->name[x] = '\0';

	n_dog->age = age;

	for (x = 0; x < kowner; x++)
		n_dog->owner[x] = owner[x];
	n_dog->owner[x] = '\0';

	return (n_dog);
}
