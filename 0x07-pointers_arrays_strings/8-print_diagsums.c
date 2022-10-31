#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: Array in use
 * @size: size of the diagonal
 */

void print_diagsums(int *a, int size)
{
	int i, diagonal1 = 0, diagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		diagonal1 += a[(i * size) + i];
		diagonal2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
