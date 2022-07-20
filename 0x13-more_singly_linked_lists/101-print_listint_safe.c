#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list
 *
 * @head: the head node of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t count;
	const listint_t *x;

	node = head;
	if (node == NULL)
		exit(98);

	count = 0;
	while (node != NULL)
	{
		x = node;
		node = node->next;
		count++;
		printf("[%p] %d\n", (void *)x, x->n);

		if (x < node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}

	return (count);
}
