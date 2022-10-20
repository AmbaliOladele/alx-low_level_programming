#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the triangle
 */

void print_triangle(int size)
{
	int sizes, sizei;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (sizes = 0; sizes < size; sizes++)
		{
			for (sizei = 1; sizei < (size - sizes); sizei++)
				_putchar(' ');
			for (sizei--; sizei < size; sizei++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
