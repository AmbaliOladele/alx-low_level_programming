#include "main.h"

/**
 * print_line - draws a line on the terminal
 * @n: the number of line to draw
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
		_putchar(95);
	_putchar('\n');
}
