#include "hash_tables.h"

/**
  * hash_table_delete - function deletes a hash table.
  * @ht: head start of the table
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *p1;
	hash_node_t *p2;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		p1 = ht->array[idx];
		while ((p2 = p1) != NULL)
		{
			p1 = p1->next;
			free(p2->key);
			free(p2->value);
			free(p2);
		}
	}
	free(ht->array);
	free(ht);
}
