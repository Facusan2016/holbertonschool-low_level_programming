#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_dog - Write a function that frees a dog.
 * @d: Dog to be liberated.
 * Return: Nothing.
 */


void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}

