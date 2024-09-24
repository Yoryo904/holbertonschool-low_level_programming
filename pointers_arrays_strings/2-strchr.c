#include "main.h"

/**
 * _strchr - locate a character and start to returns from there
 * @s: where we gonna locate the character
 * @c: the character to be located
 *
 * Return: returns since the located character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
		return ("");

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
