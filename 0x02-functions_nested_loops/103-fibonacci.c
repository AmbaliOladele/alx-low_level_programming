#include <stdio.h>

/**
 * main - prints the addition of even valued fibinacci
 * numbers.
 *
 * Return: 0
 */

int main(void)
{
	long int num1, num2, fnNum, addFn;

	num1 = 1;
	num2 = 2;
	fnNum = addFn = 0;

	while (fnNum <= 4000000)
	{
		fnNum = num1 + num2;
		num1 = num2;
		num2 = fnNum;
		if ((num1 % 2) == 0)
			addFn += num1;
	}
	printf("%ld\n", addFn);
	return (0);
}
