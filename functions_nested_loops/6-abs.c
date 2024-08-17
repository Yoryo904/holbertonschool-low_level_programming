#include "main.h"


/**
 * _abs - find the absolute value of
 * a number.
 * @n: n helps me to assign a value to
 * the local varible @abs_n
 *
 *Return: always abs_n
 */

int _abs(int n)
{
	int abs_n = n;

	if (n < 0)
		abs_n *= (-1);

	return (abs_n);
}
