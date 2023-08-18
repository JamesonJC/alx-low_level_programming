#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert an element on the a given index
 * @h:Starting point of the list
 * @idx: Position to insert on
 * @n: Value of inserted element
 * Return: Pointer to the element
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (!h || idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current && i < idx - 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

