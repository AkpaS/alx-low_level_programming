#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 *  need to flip to get from one number to another
 *
 *  @n: the int of bits?
 *  @m: the int
 *
 *  Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int y;

	x = n ^ m;
	y = 0;
	while (x)
	{
		y++;
		x &= (x - 1);
	}

	return (y);
}
