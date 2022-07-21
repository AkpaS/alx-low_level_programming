#include "main.h"

/**
 * get_bit - A function that gets the value of a bit at a given index
 *
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return:  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);
	x = n >> index;

	return (x & 1);
}
