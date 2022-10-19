#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: The input as an interger
 * @43,45,48: The ASCII code character for +,-,0
 *
 * Return: 1,+ if greater that zero, 0,0 if zero, -1,- if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
