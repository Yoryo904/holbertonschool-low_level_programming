#include "main.h"

/**
 * print_alphabet - print the whole alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26 ; i++)
		_putchar(97 + i);

	_putchar('\n');
}

