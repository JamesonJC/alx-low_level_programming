#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverse the items of list
 * @head: The start of the lists
 * Return: The pointer to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *placeholder;

	if (!head || !(*head))
		return (NULL);

	if (*head->next == NULL)
		return (*head);

	placeholder = *head;
	prev = NULL;

	while (1)
	{
		if (!prev)
		{
			prev = *placeholder;
			placeholder = placeholder->next;
			prev->next = NULL;
			*placeholder = pre;
		}
		else
		{
			prev = *placeholder;
			placeholder = prev->next;
			prev->next = *placeholder;
			if (!placeholder)
			{
				placeholder = prev;
				break;
			}
			*head = prev;
		}
	}
	*head = placeholder;
	return (*head);
}
