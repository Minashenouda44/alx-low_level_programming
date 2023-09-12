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
	dog_t *newdog;

	if (!name || !owner || age < 0)
		return (0);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (0);

	newdog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (0);
	}

	(*newdog).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*newdog).owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (0);
	}

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
