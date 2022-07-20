#include "lists.h"

/**
 * insert_nodeint_at_index - A func that inserts a new node at a given position
 *
 * @idx: the index of the list where the new node should be added. starts at 0
 * @head: pointer to pointer to the head of the linked list
 * @n: the integer
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		listint_t *new;
	listint_t *node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	node = *head;
	for (count = 1; node && count < index; count++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (index == 0)
	{
		*head = new;
		new->next = node;
	}
	else if (node->next)
	{
		new->next = node->next;
		node->next = new;
	}
	else
	{
		new->next = NULL;
		node->next = new;
	}

	return (new);
}
