#include "main.h"

/**
 * _isalpha - letter detection
 * @c: c helps me to put limits of
 * which letters i want to print
 * and which not.
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	(c >= 65 && c <= 90))
		return (1);
	return (0);
}
