#include "main.h"

/**
 * _memset - fills the memeory address of a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: the bytes filled
 * Return: pointer to the memory of s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i  = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
