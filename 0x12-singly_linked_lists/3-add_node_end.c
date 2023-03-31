#include "lists.h"

/**
 * add_node_end - Add a node
 * @head: Start of the list
 * @str: string storage
 * Return: Pointer to the start
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nPtr, *temp;
	size_t n;

	nPtr = malloc(sizeof(list_t));
	if (nPtr == NULL)
		return (NULL);

	nPtr->str = strdup(str);

	for (n = 0; str[n]; n)
		;

	nPtr->len = n;
	nPtr->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nPtr;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nPtr;
	}

	return (*head);
}
