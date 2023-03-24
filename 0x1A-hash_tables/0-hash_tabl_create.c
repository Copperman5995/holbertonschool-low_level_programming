#include "hash_tables.h"
/**
 * hash_table_create - crates a hash table
 * @size: the size that the hash table will be
 * Return: returns a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *newTable = malloc(sizeof(hash_table_t));

	if (!newTable || !size)
	{
		return (NULL);
	}

	newTable->array = malloc(sizeof(hash_node_t *) * size);

	if (!newTable->array)
	{
		return (NULL);
	}

	while (index < size)
	{
		newTable->array[index] = NULL;
		index++;
	}

	newTable->size = size;
	return (has_table);
}
