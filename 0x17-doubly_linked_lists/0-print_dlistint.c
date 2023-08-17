#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Print the elements in the doubly linked lists
 * @h: Pointer to the start of the list
 * Return: All nodes in the list 
 */

size_t print_dlistint(const dlistint_t *h)
{
	struct 
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}`
