#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to pointer of head of linked list
 * @str: char pointer to string
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
		char *extra;
	list_t *tail;
	list_t *new;
	int x;

	extra = strdup(str);
	tail = *head;
	new = NULL;

	if (!extra)
		return (NULL);
	for (x = 0; extra[x] != '\0'; x++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(extra);
		return (NULL);
	}
	new->str = extra;
	new->len = x;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	return (new);
}
