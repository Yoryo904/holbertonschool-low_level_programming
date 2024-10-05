#ifndef _DOG_H_
#define _DOG_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>

/* structure */

typedef struct dog 
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
