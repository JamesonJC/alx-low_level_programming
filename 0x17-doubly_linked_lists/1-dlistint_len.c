#include "lists.h"

/**
 * dlistint_len - Count number of element in a list
 * @h: List start pointer
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
