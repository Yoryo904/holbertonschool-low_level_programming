#include "main.h"

/**
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 122 && str[i] > 97)
			str[i] = str[i] - 32;
	}
	return (str);
}
