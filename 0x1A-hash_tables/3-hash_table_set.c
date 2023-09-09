#include "hash_tables.h"

/**
  * add - insert node on the start of the hash table.
  * @head: head start of the hash table.
  * @key: key of the value.
  * @value: value inserted.
  * Return: pointer  to the inserted node.
  */

hash_node_t *add(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *ptr;
	ptr = *head;

	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (*head);
		}
		ptr = ptr->next;
	}

	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (NULL);

	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}

/**
   * hash_table_set - function that adds an element to the hash table.
   * @ht: pointer to the node in the hash table
   * @key: key of the value
   * @value: value inserted
   * Return: 1 or 0 
   */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	if (add(&(ht->array[idx]), key, value) == NULL)
		return (0);

	return (1);
}
