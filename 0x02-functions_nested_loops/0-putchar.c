#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: return (0)
 *
 */


int main(void)
{

	char *pc = "_putchar";

	while (*pc)
	{
		_putchar(*pc);
		pc++;
	}
	_putchar('\n');

	return (0);
}
