#include "main.h"

/**
 * print_alphabet: prints the alphabet in lowercase followed by a newline
 *
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int pa;

	for (pa = 'a'; pa <= 'z'; pa++)
		_putchar(pa);
	_putchar('\n');
}
