#include "main.h"
/**
 * _strspn - counts the length of the string according to the accept string
 * @s: string to be count and checked
 * @accept: string which will be checked with *s
 *
 * Return: the length of the string according to the accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int s_length = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
				s_length++;
		}
	}
	return (s_length);
}
