#include "variadic_functions.h"

/**
 * print_all - prints the format that the user already passed
 * @format: the format the user want: c for char i for print f for float
 * s for string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separator = "";
	print_type_struct_t arrayStruct[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list arguments;

	va_start(arguments, format);
	while (format && format[i])
	{
		j = 0;
		while (arrayStruct[j].character)
		{
			if (format[i] == arrayStruct[j].character)
			{
				printf("%s", separator);
				arrayStruct[j].function(arguments);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(arguments);
}

/**
 * print_char - prints a character
 * @arguments: recive an argument type va_list
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * print_int - prints an integer
 * @arguments: recive an argument type va_list
 */

void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * print_float - prints a float
 * @arguments: recive an argument type va_list
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
/**
 * print_string - prints a string
 * @arguments: recive an argument type va_list
 */
void print_string(va_list arguments)
{
	char *string = va_arg(arguments, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
