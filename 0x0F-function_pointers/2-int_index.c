#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @array: an int array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 if elements matches and size <= 0 or the index of the first lmet
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
