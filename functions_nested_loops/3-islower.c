#include "main.h"

/**
 * _islower - lowercase detection
 * @c: c is an argument that
 * help me to put limits of which
 * letters i want to print.
 *
 *Return: always 0
 */

int _islower(int c)
{
	if (
	c >= 97 &&
	c <= 122
	)
	{
		return (1);
	}
	return (0);
}
