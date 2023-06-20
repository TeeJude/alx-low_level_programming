#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be checked
 * Return: length
 */

int _strlen(char *s)
{
	if (s == NULL)
	{
		return (0);
	}

	unsigned int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
