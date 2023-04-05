#include "lists.h"

/**
 * free_listint - Free the list
 * @head: Start of the list
 * Return: The size of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
