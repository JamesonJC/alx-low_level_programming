#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Elements of the list
 * @h: Start of the list
 * Return: Total number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
