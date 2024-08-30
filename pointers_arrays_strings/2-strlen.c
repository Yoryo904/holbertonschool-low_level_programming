#include "main.h"

/**
 * _strlen - prints the length of
 * the desire string
 * @s: the string to be count
 *
 * Returns: the length of the 
 * string
 */

int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;
	
	return (i);
}
