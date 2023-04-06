#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Removes the node in the list
 * @head: Starting point of the list
 * @index: The position of the node to be removed
 * Return: 1 if success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *placeholder, *prev;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		placeholder = *head;
		*head = (*head)->next;
		free(placeholder);
		return (1);
	}

	prev = *head;

	for ( ; i < index - 1 && prev != NULL; i++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	placeholder = prev->next;
	prev->next = placeholder->next;
	free(placeholder);

	return (1);
}
