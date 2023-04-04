#include <stdio.h>
#include "lists.h"

/**
 * print
 *
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
