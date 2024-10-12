#include "variadic_functions.h"

/**
 * sum_them_all - add the desire amount of 
 * numbers passed by the user
 * @n: the amount of numbers
 *
 * Return: returns the desire numbers's sumatory 
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list numbers;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	
	va_end(numbers);

	return (sum);
}
