#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the whole alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('\n');

		for (j = 0; j < 26; j++)
			_putchar(97 + j);

	}
}
