#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A func that creates an array of chars
 *
 * @size: size of the array
 * @c: the char
 *
 * Return: 'NULL' if the size is 0 or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(*x));

	if (x == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		x[y] = c;

	return (x);
}
