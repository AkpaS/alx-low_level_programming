#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 *
 * @n: the number that a binary representation will be printed of.
 *
 * Return: the binary repo
 */

void print_binary(unsigned long int n)
{
	unsigned long int x;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (x = n, shift = 0; (x >>= 1) > 0; shift++)
		;
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
