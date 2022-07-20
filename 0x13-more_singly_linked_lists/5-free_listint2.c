#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 *
 * @head: pointer to the pointer to the head node of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *x;

	if (head == NULL)
		return;
	node = *head;
	while (*head)
		while (node)
		{
			x = node;
			node = node->next;
			free(x);
			*head = NULL;
		}
}
