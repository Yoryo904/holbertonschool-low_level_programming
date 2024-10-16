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


void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
void print_string(va_list arguments)
{
	char *string = va_arg(arguments, char *);

	if (string == NULL)
		string = "(nil)";
  
	printf("%s", string);
}
