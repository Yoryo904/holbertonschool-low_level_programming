#include "main.h"

/**
 * _memcpy - copies the memory area without overlap
 * @dest: the destination buffer to copy
 * @src: the source buffer to be copy
 * @n: the amount of memory area to copy
 *
 * Return: returns src copyed into dest without overlap
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
