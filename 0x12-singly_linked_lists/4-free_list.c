#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *best;
	list_t *nt;

	best = head;

	while (best != NULL)
	{
		nt = best->next;
		free(best->str);
		free(best);
		best = nt;
	}

}
