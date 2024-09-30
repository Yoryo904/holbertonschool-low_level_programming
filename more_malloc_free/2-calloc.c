#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: amount of memory to allocate
 * @size: the type of variable is allocate
 *
 * Return: an array with the desire amount and size allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrayCalloc = NULL;
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
