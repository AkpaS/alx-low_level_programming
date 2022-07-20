#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 *
 * @head: the head nodes of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *x;

	if (head == NULL)
		return (NULL);

	x = head;
	node = head;
	while (x != NULL && node != NULL && node->next != NULL)
	{
		node = node->next->next;
		x = x->next;
		if (x == node)
			break;
	}
	if (x == NULL || node == NULL)
		return (NULL);
	x = head;
	while (x != node)
	{
		node = node->next;
		x = x->next;
	}
	return (x);
}
