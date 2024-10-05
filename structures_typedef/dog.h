#ifndef _DOG_H_
#define _DOG_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>

/* structure */

/**
 * struct dog - recives name, age and owner
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Description: recives the dog's name as a string, the dog's age as a float
 * and the owner's name as a string
 */

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
