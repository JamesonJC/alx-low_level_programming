#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Insert new node at the end of the list
 * @head: Starting point of the list
 * @n: Value to be inserted
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *start;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	start = *head;

	if (start != NULL)
	{
		while (start->next != NULL)
			start = start->next;
		start->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = start;
	return (new);
}
