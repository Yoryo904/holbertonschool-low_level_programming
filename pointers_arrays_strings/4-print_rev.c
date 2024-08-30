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
	int length = _strlen(s), i = 0;
	
	for (i = 0; i < length; i++)
	{
		_putchar(length  - 1 - i);
	}
	
	_putchar('\n');
}

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
                i++;

        return (i);
}
