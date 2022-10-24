#include "main.h"
/*#include "2-strlen.c"*/

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: interger value
 */

int _atoi(char *s)
{
	/*int i;
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
	*/


	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
