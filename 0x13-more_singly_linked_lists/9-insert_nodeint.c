#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node in the provided position
 * @head: Starting point of the list
 * @idx: Provide index/position
 * @n: Value inserted
 * Return: Pinter to inderted node or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *placeholder, *new;
	unsigned int i;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	placeholder = *head;

	for (i = 0; i < idx - 1; i++)
	{
		placeholder = placeholder->next;
		if (placeholder == NULL)
			return (NULL);
		placeholder = placeholder->next;
	}

	new->next = placeholder->next;
	placeholder->next = new;

	return (new);
}
