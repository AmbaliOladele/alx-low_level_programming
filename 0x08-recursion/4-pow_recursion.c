#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: interger to power
 * @y: power
 * Return: -1 if u is lower then 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
