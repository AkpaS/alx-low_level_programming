#include "lists.h"

/**
 * add_nodeint - A func that adds a new node at the beginning of list
 *
 * @head: pointer to the pointer of the head node of the list
 * @n: the int of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL && n != 0)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
