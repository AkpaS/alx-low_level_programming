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
	size_t n;
	long int node;

	n = 0;
	while (head)
	{
		node = head - head->next;
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (node > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (n);
}
