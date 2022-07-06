#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a ..
 * parameter on each element of an array
 *
 * @array: the int elements in an array pointer
 * @size: the size of the array
 * @action: the pointer to the func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  x;

	if (array && size > 0 && action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
