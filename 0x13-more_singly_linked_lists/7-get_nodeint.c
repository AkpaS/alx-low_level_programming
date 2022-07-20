#include "lists.h"

/**
 * get_nodeint_at_index - A func that gets the nth node of a linked list
 *
 * @head: pointer to the head of the linkedlist
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t  linked list or NULL if  it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x;

	node = head;
	x = 0;
	while (x < index)
	{
		if (node)
			node = node->next;
		else
			return (NULL);
		x++;
	}
	if (node)
		return (node);
	else
		return (NULL);
}
