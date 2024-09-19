#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: the string to be change to uppercase
 *
 * Return: the string changed to uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i -= 0; str[i]; i++)
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] = str[i] - 32;
	}
	return (str);
}
