#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value associated with
 *        a key in a hash table.
 * @ht: A pointer to the hash table.
 *
 * @key: The key to get the value of.
 *
 * Return: if the key cannot be matched - NULL.
 *     Otherwise - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int id;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	id = key_index((const unsigned char *)key, ht->size);
	if (id >= ht->size)
		return (NULL);

	nd = ht->array[id];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;

	return ((nd == NULL) ? NULL : nd->value);
}
