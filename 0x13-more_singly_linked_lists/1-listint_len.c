#include "lists.h"

/**
 * listint_len - A func that returns the number of elements in a linked list
 *
 * @h: the pointer to the head node of the linked list
 *
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int n;

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}

	return (n);
}
