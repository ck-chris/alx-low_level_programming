#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - store  a copy of name and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int iname, iowner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL)
		return (NULL);

	iname = strlen(name);
	n_dog->name = malloc(sizeof(char) * iname + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = strcpy(n_dog->name, name);
	iowner = strlen(owner);
	n_dog->owner = malloc(sizeof(char) * iowner + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
