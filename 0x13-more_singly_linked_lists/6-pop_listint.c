#include "lists.h"

/**
 * pop_listint - Pops out the value element in the list
 * @head: Startin point value of the list
 * Return:  New list
 */
int pop_listint(listint_t **head)
{
	listint_t *place_h;
	int r;

	if (*head == NULL)
		return (0);

	place_h = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(place_h);

	return (r);
}
