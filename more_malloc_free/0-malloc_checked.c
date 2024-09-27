#include "main.h"

/**
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mallocChecker = 0;

	mallocChecker = malloc(b);
	
	if (mallocChecker == NULL)
		exit(98);
	return (mallocChecker);
}
