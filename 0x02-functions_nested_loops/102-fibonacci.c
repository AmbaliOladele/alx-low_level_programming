#include <stdio.h>

/**
 * main - adds the fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int num;
	long int num1, num2, addFn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (num = 0; num < 48; num++)
	{
		addFn = num1 + num2;
		printf(", %ld", addFn);
		num1 = num2;
		num2 = addFn;
	}
	printf("\n");
	return (0);
}
