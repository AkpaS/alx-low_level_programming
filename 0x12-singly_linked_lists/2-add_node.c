#include "lists.h"

/**
 * add_node - A fucntion that ass a new node ay the beginni' og a list
 *
 * @head: the head of the list
 * @str: the string pointer
 *
 * Return: the address of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int x;
	char *extra;

	extra = strdup(str);
	new = NULL;

	if (extra == NULL)
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
	new->next = *head;
	*head = new;

	return (new);
}
