#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int num, primenum;

	num = 612852475143;

	for (primenum = 2; primenum <= num; primenum++)
	{
		if (num % primenum == 0)
		{
			num /= primenum;
			primenum--;
		}
	}
	printf("%ld\n", primenum);
	return (0);
}
