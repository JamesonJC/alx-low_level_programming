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

	prev = NULL;
	placeholder = NULL;

	while (*head)
	{
		placeholder = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = placeholder;
	}
	(*head) = prev;

	return (*head);
}
