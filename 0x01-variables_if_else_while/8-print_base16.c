#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always returns 0
 *
 */

int main(void)
{

	int i;
	char alp = 'a';

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
