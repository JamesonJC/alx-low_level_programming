#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free the memory
 * @head: Starting point
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start;

	start = head;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (start != NULL)
	{
		head = head->next;
		free(start);
	}
}
