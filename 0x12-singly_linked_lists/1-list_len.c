#include "lists.h"

/**
 * list_len - A  function that returns the number of elements in a linked list
 *
 * @h: the head of the linked list
 */

size_t list_len(const list_t *h)
{
	int x;
	const list_t *best;

	best = h;
	for (x = 0; best; x++)
		best = best->next;
	return (x);
}
