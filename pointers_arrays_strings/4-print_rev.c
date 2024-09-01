#include "main.h"

/**
 * print_rev - allows the user to
 * print and revert the disire
 * string
 * _strlen - allows the user to
 * know the length of the string
 * @s: the desire string
 *
 * Returns: returns void
 */


void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
