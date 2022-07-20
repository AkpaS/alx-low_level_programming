#include "lists.h"

/**
 * pop_listint - A func that deletes the head node of a listint_t linked list
 *
 * @head: the pointer to the head node of the linked list
 *
 * Return: returns the head node’s data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *x;

	if (*head == NULL)
		return (0);
	x = *head;
	data = x->n;
	*head = x->next;
	free(x);

	return (data);
}
