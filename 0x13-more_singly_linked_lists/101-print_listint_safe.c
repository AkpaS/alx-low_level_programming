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
	size_t x = 0;
	listint_t *node;

	if (head != NULL)
	{
		node = head->next;
		if (node->next != head)
		{
			while (head->next != NULL)
			{
				printf("%d\n", head->n);
				head = head->next;
				x++;
			}
			printf("%d\n", head->n);
			x++;
			return (x);
		}
		else
		{
			printf("%d\n", head->n);
			printf("%d\n", node->n);
			x += 2;
		}
	}
	exit(98);
}
