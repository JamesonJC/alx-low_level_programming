#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Insert a new node on the start of the list
 * @head: Starting point of the list
 * @n: Value to be inserted
 * Return: Pointer to the newly added value
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *start;
	dlistint_t *new;

	new = (struct dlistint_s *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	start = *head;

	if (start != NULL)
	{
		while (start->prev != NULL)
			start = start->prev;
	}
	new->next = start;
	if (start != NULL)
		start->prev = new;
	*head = new;
	return (new);
}
