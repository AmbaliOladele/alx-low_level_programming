#include "main.h"

/**
 * print_number - prints an integer
 * @n: the interger to print
 *
 */

void print_number(int n)
{
	unsigned int power, num, count;

	if (n < 0)
	{
		_putchar(45);
		power = n * -1;
	}
	else
		power = n;

	num = power;
	count = 1;

	while (num > 9)
	{
		num /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
		_putchar(((power / count) % 10) + 48);
}
