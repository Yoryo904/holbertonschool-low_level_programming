#include "dog.h"

/**
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)"); 
	/* if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n"); */
	printf("Age: %f\n", d->age ? d->age : "%f\n")
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
