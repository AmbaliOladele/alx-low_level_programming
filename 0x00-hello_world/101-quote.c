#include <unistd.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char qote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, qote, 59);
	return (1);
}
