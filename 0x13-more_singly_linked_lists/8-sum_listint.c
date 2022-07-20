#include "lists.h"

/**
 * sum_listint - A func that gets the sum of all the data (n) of linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all int n or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	for (sum = 0, node = head; node != NULL; node = node->next)
		sum += node->n;

	return (sum);
}
