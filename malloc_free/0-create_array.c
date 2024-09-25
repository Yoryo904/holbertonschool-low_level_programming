#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arrayChar = 0;

	if (size == 0)
		return (NULL);

	arrayChar = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arrayChar[i] = c;
	}

	return (arrayChar);	
	
}
