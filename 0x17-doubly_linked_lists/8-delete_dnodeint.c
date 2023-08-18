#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes the node in the list
 * @head: Starting point
 * @index: The node number to be removed
 * Return: 1 on success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (; index > 0 && current; index--)
		current = current->next;
	if (!current)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
