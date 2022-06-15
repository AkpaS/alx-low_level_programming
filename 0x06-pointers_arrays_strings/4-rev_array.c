#include "main.h"

/**
 * reverse_array - This reverses the content of an array of ints
 *
 * @a: the integer pointer
 * @n: the integer
 *
 * Return: 0 or 1
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int m = n / 2;
	int t;

	while (c < m)
	{
		t = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = t;
		c++;
	}
}
