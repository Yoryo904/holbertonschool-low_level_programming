#include "main.h"

/**
 * _isdigit - helps to know if c
 * is a digit or not
 * @c: is the digit/character
 * to be detected
 *
 * Return: return 1 if it's a digit,
 * returns 0 if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
