#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * index index of a listint_t linked list
 *
 * @head: pointer to pointer of the head of a linked list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *next;
	unsigned int x;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	for (x = 0; node != NULL && x < index - 1; x++)
		node = node->next;
	if (node == NULL || node->next == NULL)
		return (-1);

	next = node->next->next;
	free(node->next);
	node->next = next;

	return (1);
}
