#include "lists.h"

/**
 * print_list - Displays all elemets in the linked list
 * @h: The start
 * Return: Total number of nodes
 */

size_t print_list(const list_t *h)
{
	int n;

	while (h != NULL)
	{
		n = 0;

		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next;
	}
	return (n);
}
