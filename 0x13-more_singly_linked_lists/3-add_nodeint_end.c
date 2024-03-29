#include "lists.h"

/**
 * add_nodeint_end - Add a node at the start of the list
 * @head: the current start of the list pointer
 * @n: Total number of elements
 *  Return: New element address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *current_node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	current_node = *head;

	if (!(*head))
		*head = node;
	else
	{
		current_node = *head;
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = node;
	}

	return (*head);
}

