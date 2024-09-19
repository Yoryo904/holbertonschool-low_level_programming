#include "main.h"
/**
 * _strlen - counts the length of the string
 * @s: the string to be count
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcmp - compares the length of two strings
 * @s1: first string to be compared
 * @s2: seconde string to be compared
 *
 * Return: the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = s1[i] - s2[i];

	for (i = 0; s1[i] && s2[i]; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
	}

	return (diff);
}

