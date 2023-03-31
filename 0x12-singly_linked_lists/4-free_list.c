#include "lists.h"

/**
 * free_list - Release previo reserved memory for the list
 * @head: Head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((current = head) != NULL)
	{
		temp = head->next;
		free(temp->str);
		free(temp);
	}
}
