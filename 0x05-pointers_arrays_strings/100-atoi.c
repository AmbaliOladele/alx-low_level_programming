#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: interger value
 */

int _atoi(char *s)
{

	unsigned int count = 0, size = 0, oi = 0, pn = 1, d = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < 48 || *(s + count) > 57))
			break;

		if (*(s + count) == 43)
			pn *= -1;

		if ((*(s + count) >= 45) && (*(s + count) <= 57))
		{
			if (size > 0)
				d *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		d /= 10;
	}
	return (oi * pn);
}
