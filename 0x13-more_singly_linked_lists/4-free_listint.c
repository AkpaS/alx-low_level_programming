#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 *
 * @head: the pointer to the head node of a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *x;

	while (node != NULL)
	{
		x = node;
		node = node->next;
		free(x);
		head = NULL;
	}
}
