#include "main.h" 
int _strlen (char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;	
	int diff = s1[i] - s2[i];
		
	for (i = 0; s1[i] && s2[i]; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
	}
		
	return (diff);
}

