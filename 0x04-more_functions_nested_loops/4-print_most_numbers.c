#include "main.h"

/**
 * print_most_numbers - print number 0 to 9 except 2 && 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
