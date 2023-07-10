#ifndef DOG
#define DOG dog_struct

/**
 * struct dog - Struct for a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This type defines the main characteristics of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - New name for the type struct dog
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description : A new name for the dog struct
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
