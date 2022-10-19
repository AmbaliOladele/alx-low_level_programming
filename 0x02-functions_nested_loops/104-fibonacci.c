#include <stdio.h>

/** 
 * main - finds and prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int fn = 2;

	float num1 = 1;
	float num2 = num1 + 1;
	float num3 = num1 + num2;

	printf("%.0f, ", num1);
	printf("%.0f, ", num2);
	while (fn < 98)
	{
		fn++;
		printf("%.0f", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		if (fn < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
