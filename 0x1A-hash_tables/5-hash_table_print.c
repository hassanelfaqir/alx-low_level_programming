#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: A pointer to the hash table to print.
 *
 * Description: The key/value pairs are printed in the order
 * 	in which they appear in the hash table's array.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			nd = ht->array[i];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
