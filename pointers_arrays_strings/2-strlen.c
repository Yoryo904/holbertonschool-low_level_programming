#include "main.h"

/**
 * _strlen - prints the length of
 * the desire string
 * @s: the string to be count
 *
 * Return: returns the string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
