#include "main.h"

/**
 * _strpbrk - searches for a string
 * @s: string to located
 * @accept: array to search in
 * Return: pointer to the bytes s that meatches on in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
