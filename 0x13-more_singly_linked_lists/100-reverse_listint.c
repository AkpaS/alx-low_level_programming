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
	listint_t *x;
	listint_t *node;

	if (*head == NULL)
		return (NULL);
	node = *head;
	*head = node->next;
	x = (*head)->next;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (x != NULL)
	{
		(*head)->next = node;
		node = *head;
		*head = x;
		x = (*head)->next;
	}
	(*head)->next = node;

	return (*head);
}
