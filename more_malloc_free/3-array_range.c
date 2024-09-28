#include "main.h"

/**
 * array_range - create and allocate an array of integers
 * @min: the minimum integer
 * @max: the maximum integer (the limit)
 *
 * Return: an array of integers since min to max
 */

int *array_range(int min, int max)
{
	int *arrayRange = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	arrayRange = (int *) malloc(sizeof(int) * max);

	if (arrayRange == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		arrayRange[i] = i + min;

	return (arrayRange);

}
