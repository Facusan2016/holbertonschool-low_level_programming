#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Write a function that prints a dog's characteristics.
 * @d: Struct to be initialized
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);


}

