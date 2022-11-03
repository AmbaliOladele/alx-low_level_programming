#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: length of string to return
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (0);
}
