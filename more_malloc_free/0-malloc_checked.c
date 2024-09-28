#include "main.h"

/**
 * malloc_checked - allocates memory and if it fails it will cause normal
 * process termination with a status value of 98
 * @b: the amount of memory to be allocate
 *
 * Return: returns an array with the allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *mallocChecker = 0;

	mallocChecker = malloc(b);
	
	if (mallocChecker == NULL)
		exit(98);
	return (mallocChecker);
}
