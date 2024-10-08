#include "dog.h"

/**
 * free_dog - free a pointer type dog_t
 * @d: the pointer type dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
