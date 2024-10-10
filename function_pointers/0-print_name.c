#include "function_pointers.h"

/**
 * print_name - prints the desire name with a function that will
 * modify the name
 * @name: the name to be print
 * @f: the function that will modify name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
