#include "main.h"

/**
 * print_diagsums - prints the diagonals addition of a matrix
 * @a: the array to be print
 * @size: the size of the array that it will be print
 *
 * Return: the diagonals adition of the matrix
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
