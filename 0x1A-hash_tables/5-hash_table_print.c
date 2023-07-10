#include "hash_tables.h"

/**
 * hash_table_print - function that prints the a hash table
 * @ht: hash table to be printed
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *mem;
	int variab = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		mem = ht->array[i];
		while (mem)
		{
			if (variab)
				printf(", ");
			printf("'%s': '%s'", mem->key, mem->value);
			variab = 1;
			mem = mem->next;
		}
	}
	printf("}\n");
}

