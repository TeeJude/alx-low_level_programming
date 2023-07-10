#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be removed
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *mem, *remove;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		mem = ht->array[i];
		while (mem)
		{
			remove = mem;
			mem = mem->next;
			if (remove->key)
				free(remove->key);
			if (remove->value)
				free(remove->value);
			free(remove);
		}
	}
	free(ht->array);
	free(ht);
}
