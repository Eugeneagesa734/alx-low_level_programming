#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - setup a variable of the type dog
 * @d: pointer to initialize struct dog
 * @name: the name to be initialized
 * @age: age to be initialized
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
