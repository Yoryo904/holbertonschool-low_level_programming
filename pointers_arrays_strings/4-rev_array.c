#include "main.h"


/**
 * reverse_array - reverse the content of an array of integers according
 * to the desire number of bytes
 * @a: the array to be reverse
 * @n: the number of bytes to reverse
 *
 * Returns: returns void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

	}


}
