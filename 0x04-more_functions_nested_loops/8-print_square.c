#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int sizes, sizei;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (sizes = 0; sizes < size; sizes++)
		{
			for (sizei = 0; sizei < size; sizei++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
