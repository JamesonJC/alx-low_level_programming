#include "hash_tables.h"

/**
  * hash_table_print - function prints a hash table.
  * @ht: head start of the table.
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *ptr;
	char *seperator;

	if (ht == NULL)
		return;

	printf("{");
	seperator = "";

	for (idx = 0; idx < ht->size; idx++)
	{
		ptr = ht->array[idx];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'", seperator, ptr->key, ptr->value);
			seperator = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
