#include "main.h"

/**
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_diagonal_asc = 0, sum_diagonal_desc = 0;

	for (i = 0; i < size; i++)
	{
		sum_diagonal_asc += a[(size + 1) * i];
		sum_diagonal_desc += a[(size - 1) * (i + 1)];	

	}		
	printf("%d, %d\n", sum_diagonal_asc, sum_diagonal_desc);
}
