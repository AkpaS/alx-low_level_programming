#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list
 *
 * @head: a pointer to the pointer  to the head node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *node;

	x = NULL;
	node = NULL;
	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		node->next = x;
		x = node;
	}
	*head = node;

	return (*head);
}
