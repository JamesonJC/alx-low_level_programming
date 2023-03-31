#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list
 * @head: The pointer to the start
 * @str: The string
 * Return: The address to the new line
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nextPtr;
	char *sPtr;
	int ln;

	nextPtr = malloc(sizeof(list_t));

	if (nextPtr == NULL)
		return (NULL);

	sPtr = strdup(str);

	if (sPtr == NULL)
	{
		free(nextPtr);
		return (NULL);
	}

	for (ln = 0; str[ln];)
		ln++;

	nextPtr->str = sPtr;
	nextPtr->ln = ln;
	nextPtr->next = *head;

	*head = nextPtr;

	return (nextPtr);
}
