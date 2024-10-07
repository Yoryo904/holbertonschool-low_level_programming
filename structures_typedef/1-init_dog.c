#include "dog.h"

/**
 * init_dog - initialize a pointer type struct dog
 * @d: the struct's pointer to acces
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
