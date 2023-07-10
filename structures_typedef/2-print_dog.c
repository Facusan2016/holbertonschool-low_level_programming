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
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else if (d->name != NULL)
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: (nil)\n");
		else if (d->age != 0)
			printf("Age: %.6f \n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else if (d->owner != NULL)
			printf("Owner: %s", d->owner);

	}
}

