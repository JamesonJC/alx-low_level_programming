#include <stdio.h>
#include "lists.h"

/**
 * listint_len - The number of elements of the list
 * @h: Pointer to start
 * Return: Total number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
