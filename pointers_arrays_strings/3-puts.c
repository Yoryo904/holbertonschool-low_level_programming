#include "main.h"

/**
 * _puts - prints the desire
 * string
 * @str: string to be print
 *
 * Return: returns void
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
