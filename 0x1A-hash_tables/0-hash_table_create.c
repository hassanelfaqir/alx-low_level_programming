#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: if an error occurs - NULL.
 *  Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash-t;
	unsigned long int s;

	hash-t = malloc(sizeof(hash_table_t));
	if (hash-t == NULL)
		return (NULL);

	hash-t->size = size;
	hash-t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash-t->array == NULL)
		return (NULL);
	for (s = 0; s < size; s++)
		hash-t->array[s] = NULL;

	return (hash-t);
}
