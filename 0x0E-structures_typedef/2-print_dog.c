#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!(d->name))
		d->name = "(nill)";

	if (!(d->owner))
		d->owner = "(nill)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
