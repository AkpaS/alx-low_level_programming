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
	listint_t *node;
	listint_t *newnode;

	while (*head)
	{
		newnode = malloc(sizeof(listint_t));
		node = *head;
		newnode->n = n;

		if (idx == 0)
		{
			newnode->next = NULL;
			return (newnode);
		}
		while (node->next != NULL && idx - 1 > 0)
		{
			node = node->next;
			idx--;
		}
		if (node->next == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = node->next;
		node->next = newnode;
		return (newnode);
	}
	return (NULL);
}
