#include "main.h"

/**
 * print_sign - Print +,0 or -
 * if the number is higher, less
 * or equals 0
 * @n: n helps me to find wich
 * numbers are higher, less, or
 * equals
 *
 * Return: 1, 0, -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
