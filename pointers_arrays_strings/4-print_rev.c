#include "main.h"

/**
 * print_rev - allows the user to
 * print and revert the disire
 * string
 * @s: the desire string
 *
 * Returns: returns void
 */


void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;
	
	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
