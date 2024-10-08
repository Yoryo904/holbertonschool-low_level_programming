#include "main.h"

/**
 * _strpbrk - searches a string of any set of bytes according
 * to accept
 * @s: the string to be checked
 * @accept: the string which will check *s
 *
 * Return: returns the string *s since the match of bytes previusly
 * checked
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	if (accept == NULL || *accept == '\0')
		return (NULL);
	if (s == NULL || *s == '\0')
		return (NULL);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
