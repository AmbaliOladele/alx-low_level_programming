#include "main.h"

/**
 * power - returns the natural sqaure root of a number
 * @n: number
 * @i: iterator
 * Return: square root
 */

int power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: number to sqaure
 * Return: natural sqaure root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
