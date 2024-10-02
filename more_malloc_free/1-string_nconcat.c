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
 * string_nconcat - allocates and concatenates 2 strings
 * @s1: first string to be concatenate
 * @s2: second string to be concatenate
 * @n: the limit of bytes to concatenate
 *
 * Return: the string concatenated and allocated in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arrayChar = NULL;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i = 0;

	if (s2 != NULL)
		s2_len = _strlen(s2);
	if (s1 != NULL)
		s1_len = _strlen(s1);
	if (n < s2_len)
		s2_len = n;

	arrayChar = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (arrayChar == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		arrayChar[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		arrayChar[i + s1_len] = s2[i];
	}
	arrayChar[s1_len + s2_len] = '\0';
	return (arrayChar);
}
