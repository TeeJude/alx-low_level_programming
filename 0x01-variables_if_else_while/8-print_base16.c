#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char alph;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
