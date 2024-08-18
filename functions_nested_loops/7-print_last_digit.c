#include "main.h"

/**
 * print_last_digit - find and print the
 * last digit of a number
 * @n: is the desire number to return
 * his last number
 *
 * Return: Always the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');

	return (lastDigit);
}
