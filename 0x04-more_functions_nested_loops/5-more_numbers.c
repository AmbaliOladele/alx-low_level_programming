#include "main.h"

/**
 * more_numbers - prints number 0 to 14, 10 times
 */

void more_numbers(void)
{
	int times10, num;

	for (times10 = 1; times10 <= 10; times10++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
