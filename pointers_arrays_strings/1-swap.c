#include "main.h"

/**
 * swap_int - swaps the value of a and b 
 * @a: value to swap
 * @b: value to swap
 *
 * Returns: void
 */

void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
