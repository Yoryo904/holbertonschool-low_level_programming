#include "variadic_functions.h"

/**
 * print_numbers - print the desire amount of numbers and the
 * user can choose the separator between the numbers
 * @separator: the separator that will be between the numbers
 * @n: the amount of numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int currentNumber = 0;

	va_list numbers;

	va_start(numbers, n);

	if (n <= 0)
	{
		printf("");
		return;
	}
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n - 1; i++)
	{
		currentNumber = va_arg(numbers, int);
		printf("%d%s", currentNumber, separator);
	}
	currentNumber = va_arg(numbers, int);
	printf("%d\n", currentNumber);

	va_end(numbers);
}
