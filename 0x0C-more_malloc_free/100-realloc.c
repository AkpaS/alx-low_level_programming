#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - A func that reallocates a memory block using malloc and free
 *
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: NULL if new_size is equal to zero, and ptr is not NULL
 * return void or ptr if new_size == old_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *d, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		d = malloc(new_size);
		if (d == NULL)
			return (NULL);
		return (d);
	}

	d = malloc(new_size);
	if (d == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		d[i] = copy[i];
	free(ptr);
	return (d);
}
