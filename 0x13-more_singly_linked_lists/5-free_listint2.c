#include "lists.h"

/**
 * free_listint2 - Free the list
 * @head: Start of the the list
 */

void free_listint2(listint_t **head)
{
	listint_t *element,  *temp;

	if (head)
	{
		element = *head;
		while (temp = element)
		{
			element = element->next;
			free(temp);
		}
		*head = NULL;
	}
}
