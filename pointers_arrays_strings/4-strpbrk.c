#include "main.h"

/**
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
				break;
		}
	}
	return (s + i);	
}
