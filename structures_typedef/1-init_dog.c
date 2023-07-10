#include "dog.h"
#include "main.h"

/**
 * init_dog - Write a function that initializes a variable of type struct dog.
 * @d: Struct to be initialized
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age  = age;
	d->owner = owner;
}

