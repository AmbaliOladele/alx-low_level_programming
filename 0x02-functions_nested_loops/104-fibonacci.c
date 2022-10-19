#include <stdio.h>
#define AMOUNT 1000000000

/**
 * main - finds and prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long int num = 0, numFn = 1, num2 = 0, numFn2 = 2;
	unsigned long int output, output2, output3;

	printf("%lu, %lu, ", numFn, numFn2);

	for (count = 2; count < 98; count++)
	{
		if ((numFn + numFn2 > AMOUNT) || (num || num2 > 0))
		{
			output = (numFn + numFn2) / AMOUNT;
			output2 = (numFn + numFn2) % AMOUNT;
			output3 = num + num2 + output;
			num = num2, num2 = output3;
			numFn = numFn2, numFn2 = output2;
			printf("%lu%010lu", num2, numFn2);
		}
		else
		{
			output2 = numFn + numFn2;
			numFn = numFn2, numFn2 = output2;
			printf("%lu", numFn2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
