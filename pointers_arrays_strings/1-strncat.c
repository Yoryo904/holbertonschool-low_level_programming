#include "main.h"

/**
 * _strlen - counts the length
 * @s: string to be count
 *
 * Return: the length (i) of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strncat - concatenates dest and src in 1 string
 * @dest: first string to be concatenate
 * @src: second string to be conatenate
 * @n: the number of bytes of src
 *
 * Return: returns the concatenated string
 */
char *_strncat(char *dest, char *src, int n);
{
	int dest_len = 0;
	int src_len = 0;
	int i = 0;

	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);
	dest_len = _strlen(dest);
	src_len = _strlen(src);

	if (n < src_len)
		src_len = n;
	while (i < src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
