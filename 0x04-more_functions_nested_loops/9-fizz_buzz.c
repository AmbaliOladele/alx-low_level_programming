#include <stdio.h>

/**
 * main - prints fizz if multiple of 3, else if 5 prints Buzz
 * else 3 && 5 prints fizzBuzz
 *
 * Return: 0;
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 15 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);
		if (number != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
