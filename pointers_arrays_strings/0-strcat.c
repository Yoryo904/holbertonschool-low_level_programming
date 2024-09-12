#include "main.h"
/**
 * _strlen - counts the length of the desire string
 * @s: string to be count
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);

}
/**
 * _strcat - concatenates the string saved in
 * dest pointer and the sring saved in src
 *  pointer in one string
 * @dest: first string to be concatenate
 * @src: second string to be concatenate
 *
 * Return: returns the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);
	dest_len = _strlen(dest);

	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}

