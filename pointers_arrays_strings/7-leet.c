#include "main.h"

/**
 * leet - the letters a, e, o, t, l, of the string for the numbers
 *  4, 3, 0, 7, 1, respectively
 * @str: the string to be modified
 *
 * Return: returns void
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char aeotl[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; aeotl[j]; j++)
		{
			if (str[i] == aeotl[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
