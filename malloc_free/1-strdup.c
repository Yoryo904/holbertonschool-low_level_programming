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
	int str_len = _strlen(str);

	arrayString = (char *) malloc(sizeof(str) * str_len);

	if (str == NULL)
		return (NULL);
	if (*str == "")
		return ("");
	if (arrayString == NULL)
		return (NULL);

	for (i = 0; i <= str_len; i++)
	{
		arrayString[i] = str[i];
	}
	return (arrayString);
}
