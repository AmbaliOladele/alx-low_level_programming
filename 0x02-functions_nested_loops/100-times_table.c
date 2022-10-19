#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: The number
 *
 */

void print_times_table(int n)
{
	int num, multi, output;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				output = num * multi;
				_putchar(44);
				_putchar(32);
				if (output <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(output + 48);
				}
				else if (output <= 99)
				{
					_putchar(32);
					_putchar((output / 10) + 48);
					_putchar((output % 10) + 48);
				}
				else
				{
					_putchar(((output / 100) % 10) + 48);
					_putchar(((output / 10) % 10) + 48);
					_putchar((output % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}












