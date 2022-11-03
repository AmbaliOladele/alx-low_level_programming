#include "main.h"

/**
 * prime - checks if an input is a prime number
 * @n: number
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if n is not.
 */

int prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, i + 1));
}


/**
 * is_prime_number - checks if an input is a prime number
 * @n: number
 * Return: 1 if n is a prime number, 0 if n is not.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (prime(n, 2));
}
















