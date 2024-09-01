#include "main.h"

/**
 * _isupper - helps to know if
 * c is uppercase or not
 * @c: is the character to be detected
 *
 * Return: return 1 if it's uppercase
 * return 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);

}
