#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of lines to draw
 */

void print_diagonal(int n)
{
	int line, lineIndex;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
		{
			for (lineIndex = 0; lineIndex < line; lineIndex++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
