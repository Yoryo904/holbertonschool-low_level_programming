#include "main.h"

/**
 *
 */

char *leet(char *str)
{
	int i = 0;
	char aeotl[] = {'a', 'A','e', 'E', 'o', 'O', 't', 'T', 'l', 'L'}; 
	char numbers[] = {'4', '3', '0', '7', '1'};
 
	for (i = 0; str[i]; i++)

		if (str[i] == (aeotl[0] || aeotl[1]) && (aeotl[2] || aeotl[3]) && (aeotl[4] || aeotl[5]) && (aeotl[6] || aeotl[7]) && (aeotl[8] || aeotl[9]))
			str[i] = numbers[0] && str[i] = numbers[1] && str[i] = numbers[2] && str[i] = numbers[3] && str[i] = numbers[4];
			continue
	return (str);
}
