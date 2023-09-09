#include "hash_tables.h"

/**
  * key_index - function that retuens an index of a key.
  * @key: key.
  * @size: hash table size.
  * Return: index.
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
