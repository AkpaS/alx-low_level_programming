#include "lists.h"


/**
 * print_list - A function that prints all elements of a list_t list
 *
 * @h: the head of the lined list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *best;
	size_t x;

	x = 0;
	best = h;
	while (best != NULL)
	{
		if (best->str == NULL)
		{
			printf("[0] (nil)\n");
			best = best->next;
			 x++;
		}
		printf("[%d] %s\n", best->len, best->str);
		best = best->next;
		x++;
	}
	return (x);
}
