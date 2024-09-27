#include "main.h"

/**
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrayCalloc = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrayCalloc = malloc(nmemb * size);

	if (arrayCalloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arrayCalloc[i] = 0;

	return (arrayCalloc);
}
