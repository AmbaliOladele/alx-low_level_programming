#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int pa10, pa;

	for (pa10 = 0; pa10 <= 9; pa10++)
	{
		for (pa = 97; pa <= 122; pa++)
		{
			_putchar(pa);
		}
		_putchar('\n');
	}
}
