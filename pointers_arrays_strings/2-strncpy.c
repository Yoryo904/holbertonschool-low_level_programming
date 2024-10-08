#include "main.h"

/**
 * _strlen - counts the length of the string
 * @s: string to be counted
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * _strncpy - rewrites the number of bytes
 * (n) src for the dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: destination string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int i = 0;

	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);

	src_len = _strlen(src);


	if (n < src_len)
		src_len = n;
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}

	if (n > src_len)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
