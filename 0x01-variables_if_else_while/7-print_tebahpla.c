#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always return 0
 *
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
