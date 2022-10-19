#include "main.h"

/**
 * _islower - checks for lowercase , returns 1 if c is lowercase else returns 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase , else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
