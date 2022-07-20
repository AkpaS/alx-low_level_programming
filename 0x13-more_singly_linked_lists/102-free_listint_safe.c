#include "lists.h"

/**
 *  free_listint_safe - A  function that frees a listint_t list
 *
 *  @h: the head node of the linked list
 *
 *  Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *x;
	size_t count;

	count = 0;
	node = *h;
	while (node != NULL)
	{
		count++;
		x = node;
		node = node->next;
		free(x);

		if (x < node)
			break;
	}
	*h = NULL;

	return (count);
}
