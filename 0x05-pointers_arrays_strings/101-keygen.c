#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates keygen
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int r = 0;

	time_t t;

	srand((unsigned int) time(&t));
	while (r < 2772)
	{
		i = rand() % 128;
		if ((r + i) > 2772)
			break;
		r = r + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - r));

	return (0);
}
