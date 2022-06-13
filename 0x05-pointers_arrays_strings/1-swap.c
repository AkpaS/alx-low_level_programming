#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: the integer
 * @b: the integer
 * Return: 0 or 1
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
