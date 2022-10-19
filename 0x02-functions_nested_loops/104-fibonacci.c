#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int number, checkNumber, checkNumber2, modF2;
	long int num1, num2, fn, fn2, num11, num22;

	num1 = 1, num2 = 2;
	checkNumber = checkNumber2 = 1;
	printf("%ld, %ld", num1, num2);
	for (number = 0; number < 96; number++)
	{
		if (checkNumber)
		{
			fn = num1 + num2;
			printf(", %ld", fn);
			num1 = num2;
			num2 = fn;
		}
		else
		{
			if (checkNumber2)
			{
				num11 = num1 % 1000000000;
				num1 /= 1000000000;
				num22 = num2 % 1000000000;
				num2 /= 1000000000;
				checkNumber2 = 0;
			}
			modF2 = fn2 % 1000000000;
			fn2 = num11 + num22;
			fn = (num1 + num2) + (modF2);
			printf(", %ld", fn);
			printf("%d", modF2);
			num1 = num2;
			num11 = num22;
			num2 = fn;
			num22 = modF2;
		}
		if (((num1 + num2) < 0) && checkNumber == 1)
			checkNumber = 0;
	}
	printf("\n");
	return (0);
}
