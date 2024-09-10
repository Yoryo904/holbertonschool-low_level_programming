#include "main.h"

/**
 *
 */

char *cap_string(char *str)
{
	int i = 0;
	char sep0 = 32, sep1 = 33,sep2 = 34, sep3 = 40, sep4 = 41,sep5 = 46,sep6 = 44,sep7 = 59, sep8 = 63, sep9 = 59, sep10 = 123, sep11 = 125;
	char separators = sep0, sep1, sep2, sep3, sep4 sep5, sep6, sep7, sep8, sep9, sep10, sep11

	for (i = 0; str[i]; i++;)
	{
		if (str[i] == separators)
		{
			if (str[i] > 97 && str[i] < 122)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}	

