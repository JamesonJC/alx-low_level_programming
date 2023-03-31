#include "lists.h"

/**
 * free_list - Release previo reserved memory for the list
 * @head: Head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str)
			free(head->str);

		free(head);
		head = head->next;
	}
}
