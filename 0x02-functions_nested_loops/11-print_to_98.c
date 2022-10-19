#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: The number
 *
 */

void print_to_98(int n)
{

	int index;

	if (n > 98)
	{
		for (index = n; index >= 98; index--)
		{
			printf("%d", index);
			if (index != 98)
				printf(", ");
		}
	}
	else
	{
		for (index = n; index <= 98; index++)
		{
			printf("%d", index);
			if (index != 98)
				printf(", ");
		}
	}
	printf("\n");
}
