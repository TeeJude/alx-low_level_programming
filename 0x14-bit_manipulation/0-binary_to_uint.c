#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string pointing to the binary
 *
 * Return: the converted number or 0 if one or more char in string or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_num = 2 * decimal_num + (b[i] - '0');
	}

	return (decimal_num);
}
