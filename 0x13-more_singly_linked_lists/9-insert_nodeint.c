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
	listint_t *new, *node;
	unsigned int count;

	node = *head;

	count = 0;
	while (node && count < idx - 1)
	{
		node = node->next;
		count++;
	}

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (count + 1 == idx)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
