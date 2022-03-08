#include "dog.h"

/**
 * init_dog - main
 * @d : dog
 * @name : name dog
 * @age : age dog
 * @owner : owuner dog
 *
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
