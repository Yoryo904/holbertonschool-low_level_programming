#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and allocates in memory any
 * character you want (c)
 * @size: the size of memory that will be allocate
 * @c: the character which will be allocate in the reserved address
 *
 * Return: returns an array with the desire character and size
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arrayChar = 0;

	if (size == 0)
		return (NULL);

	arrayChar = (char *) malloc(sizeof(char) * size);
	
	if (arrayChar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arrayChar[i] = c;
	}
	return (arrayChar);
}
