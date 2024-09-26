#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 
 */

int **alloc_grid(int width, int height)
{
	int **arrayIntegers = 0;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrayIntegers = (int **) malloc(sizeof(int *) * height);

	if (arrayIntegers == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arrayIntegers[i] = (int *) malloc(sizeof(int) * width);
		if (arrayIntegers[i] == NULL)
		{
			for (; i >= 0; --i)
				free(arrayIntegers[i]);
			free(arrayIntegers);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arrayIntegers[i][j] = 0;
		}
	}
	return (arrayIntegers);

				
}
