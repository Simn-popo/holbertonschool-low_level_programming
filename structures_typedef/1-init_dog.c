#include "dog.h"
#include <stddef.h>

/**
 * init_dog - set doggy
 * @d: pointeur de la structure
 * @name: poppy
 * @age: 3.5
 * @owner: snoop boby dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
