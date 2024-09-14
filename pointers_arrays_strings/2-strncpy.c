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
 * @dest - destination string
 * @src - source string
 * 
 * Return: destination string (dest)  
 */

char *_strncpy(char *dest, char *src, int n)
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
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}

	if (n < src_len)
	{
		dest[i] = '\0';
	}	

	if (n > src_len)
	{
		while (i < dest_len)
		{
			dest[i] = '\0';
			i++;	
		}
	}
		
	
	return (dest);
}
