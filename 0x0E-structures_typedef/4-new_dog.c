#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if (!name || !owner || age < 0)
		return (0);*/

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (0);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (0);
	}

	(*dog).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (0);
	}

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
