#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - A func that allocates mem for an array
 *
 * @nmemb: the elements in the array
 * @size: size f the elements of the array
 *
 * Return: 0 if nmemb or size is 0
 * if malloc fails then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		*((char *)(d) + x) = 0;

	return (d);
}
