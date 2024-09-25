#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts the length of a string
 * @s: the string to be count
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strdup - allocates the string in another memory adress
 * @str: the string to be allocated
 *
 * Return: returns the string allocated in a new adress
 */

char *_strdup(char *str)
{
	int i = 0;
	char *arrayString = 0;
	int str_len = 0;

	if (str == NULL)
		return (NULL);
	str_len = _strlen(str);
	arrayString = (char *) malloc(sizeof(char) * (str_len + 1));

	if (arrayString == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
	{
		arrayString[i] = str[i];
	}
	arrayString[str_len] = '\0';

	return (arrayString);
}
