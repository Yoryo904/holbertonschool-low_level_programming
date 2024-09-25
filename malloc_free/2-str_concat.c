#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *c)
{
	int i = 0;

	while (c[i])
		i++;
	return (i);
}

/**
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *arrayConcat = 0;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 != NULL)
		s1_len = _strlen(s1);
	if (s2 != NULL)
		s2_len = _strlen(s2);

	arrayConcat = (char *) malloc(sizeof(char) * (s1_len + s2_len));

	if (arrayConcat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		arrayConcat[i] = s1[i];	
	}
	for (i = 0; i < s2_len; i++)
	{
		arrayConcat[i + s1_len] = s2[i];
	}
	return (arrayConcat);

}
