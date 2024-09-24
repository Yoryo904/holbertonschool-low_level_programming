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
		for (j = 0; j < needle_len;j++)
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
