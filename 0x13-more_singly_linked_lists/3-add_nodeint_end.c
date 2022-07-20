#include "lists.h"

/**
 * add_nodeint_end - A func  that adds a new node at the end of a listint_t lis
 *
 * @head: pointer to the pointer of the head node of the linked list
 * @n: the int of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = *head;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL && n != 0)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new;

	return (new);
}
