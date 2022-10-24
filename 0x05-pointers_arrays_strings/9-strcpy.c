#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies and paste a string into another pointer variable
 * @src: the string to copy
 * @dest: variable to paste in
 *
 * Return: dest value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
