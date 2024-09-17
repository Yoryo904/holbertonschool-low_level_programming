#include "main.h"

/**
 *
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char separators[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};  

	for (i = 0; str[i]; i++)
	{
		for (j = 0; separators[j]; j++)
		{
			if (i == 0 && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;

			if (str[i] == separators[j] && str[i + 1])
			{
				if (str[i + 1] >= 97 && str[i + i] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
					break;
				}
			}
		}
	}
	return (str);
}	

