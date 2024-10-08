#include "function_pointers.h"

/**
 * array_iterator - execute action on the desire array and size
 * @array: the array of integers
 * @size: the array's size
 * @action: the function to iterate
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	if (size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
