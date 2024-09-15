#include "main.h"
/**
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int str_len = 0;

	for (i = 0; s[i]; i++)
	{
		for (i= 0; accept[j]; i++)
			if (s[i] == accept[j])
			{
				str_len = _strlen(s);
				break;
			}
	}
	return (str_len);
}
