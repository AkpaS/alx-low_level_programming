#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A func that creates an array of integers
 *
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: NULL if min > max or if malloc fails
 * the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *d, x;

	if (min > max)
		return (NULL);

	d = malloc((max - min + 1) * sizeof(*d));
	if (d == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		d[x] = min;

	return (d);
}
