#include "main.h"

/**
 * _memset - fills the memory with a constant byte (b)
 * @s: the area of memry to fill
 * @b: the byte which it will fill the memory
 * @n: the amount of momory to fill
 *
 * Return: returns the n amount of memory filled by the b byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
