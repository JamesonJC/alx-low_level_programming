#include "lists.h"

/**
 * sum_listint - Sum all the elements of the list
 * @head: Start point of the list
 * Return: Value of the total sum
 */

int sum_listint(listint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot = tot + head->n;
		head = head->next;
	}

	return (tot);
}
