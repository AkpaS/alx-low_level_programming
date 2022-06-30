#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A func that allocates memmory using malloc
 *
 * @b: unsigned int with memory size to alloc
 *
 * Return: A pointer to alloc mem or 98 if the malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *z = malloc(b);

	if (z == NULL)
		exit(98);

	return (z);

}
