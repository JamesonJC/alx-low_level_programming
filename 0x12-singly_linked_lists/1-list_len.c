#include "lists.h"

/**
 * list_len - Works the number of elemets in a list
 * @h: singly linked list
 * Return: Tolal number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
