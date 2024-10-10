#include "function_pointers.h"

/**
 * int_index - search the desire integer and returns the index
 * @array: the integer's array to search
 * @size: the array's size
 * @cmp: the function to compare
 *
 * Return: the integer's index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
