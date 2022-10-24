#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first interger
 * @b: second interger
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
