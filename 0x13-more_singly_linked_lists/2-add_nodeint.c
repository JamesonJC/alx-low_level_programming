#include "lists.h"

/**
 * add_nodeint - Creates a new node
 * @head: A pointer to to start
 * @n: The new value for the node
 * Return: Address to the new node or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
