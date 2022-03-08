#include <stdio.h>
#include "dog.h"

/**
 * print_dog - main
 * @d : dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n",d->name);
		printf("Age: %f\n",d->age);
		printf("Owner: %s\n",d->owner);

	}
}
