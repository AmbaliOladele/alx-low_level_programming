#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: The input value of the interger
 *
 * Return: 0
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
