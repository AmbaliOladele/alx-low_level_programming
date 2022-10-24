#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: interger value
 */

int _atoi(char *s)
{
	int i;
	int pn = 0;
	int count;
	int d = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= 48 && s[i] <= 57) && count > 0)
			break;
		if (s[i] == '-')
			pn--;
		if (s[i] == '+')
			pn++;
		if (s[i] >= 48 && s[i] <= 57)
			count++;
	}

	while (count > 0)
	{
		num += ((s[i - 1] - 48) * d);
		i--;
		count--;
		d *= 10;
	}
	if (pn >= 0)
		num *= 1;
	else
		num *= -1;

	return (num);
}
