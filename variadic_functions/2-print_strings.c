#include "variadic_functions.h"

/**
 * print_strings - print the desire amount of strings and the
 * user can choose the separator between the strings
 * @separator: the separator that will be between the strings
 * @n: the amount of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *currentString = NULL;

	va_list strings;

	va_start(strings, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n - 1; i++)
	{
		currentString = va_arg(strings, char *);
		if (currentString == NULL)
			currentString = "(nil)";
		printf("%s%s", currentString, separator);
	}
	currentString = va_arg(strings, char *);
	if (currentString == NULL)
		currentString = "(nil)";
	printf("%s\n", currentString);

	va_end(strings);
}
