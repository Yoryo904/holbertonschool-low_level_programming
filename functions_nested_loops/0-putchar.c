#include "main.h"

/**
 * print putchar
 *
 */

int main(void)
{
	char *text = "_putchar\n";
	int i = 0;
	for (i = 0; text[i]; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
