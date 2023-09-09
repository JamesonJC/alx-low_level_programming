#include "hash_tables.h"

/**
  * hash_table_create - function creates a hash table.
  * @size: size of the table.
  * Return: hash table, or NULL
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int idx;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)r
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
