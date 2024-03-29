#include "lists.h"

/**
 * get_nodeint_at_index - The nth node
 * @head: Starting of the list
 * @index: The index location of the node
 * Return: The nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
