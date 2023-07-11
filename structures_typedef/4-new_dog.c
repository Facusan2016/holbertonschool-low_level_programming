#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Write a function that creates a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner
 * Return: Nothing.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *namecpy;
	char *ownercpy;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	namecpy = malloc(sizeof(char) * strlen(name));

	if (namecpy == NULL)
		return (NULL);

	ownercpy = malloc(sizeof(char) * strlen(owner));

	if (ownercpy == NULL)
		return (NULL);
	
	namecpy = strcpy(namecpy, name);
	ownercpy = strcpy(ownercpy, owner);
	new->age = age;
	new->owner = ownercpy;
	new->name = namecpy;

	return (new);

}

