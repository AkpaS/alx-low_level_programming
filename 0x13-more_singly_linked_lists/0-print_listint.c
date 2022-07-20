#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: the pointer to the head node of the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (x);
}
