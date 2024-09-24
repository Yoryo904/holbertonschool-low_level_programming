#include "main.h"

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
 * _strstr - locates a subtring according to needle
 * @haystack: the string which _strstr will locate the subtring
 * @needle: the substring to be located in the haystack
 *
 * Return: returns the located substring in the main string (haystack)
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int needle_len = _strlen(needle);

	if (needle == NULL || *needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (j == needle_len - 1)
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
