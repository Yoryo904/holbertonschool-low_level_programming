#include "main.h"

/**
 *
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char aeotl[] = {'a', 'A','e', 'E', 'o', 'O', 't', 'T', 'l', 'L'}; 
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
