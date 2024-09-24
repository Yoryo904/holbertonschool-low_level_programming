#include "main.h"

/**
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	if (accept == NULL || *accept == '\0')
		return (s);
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
