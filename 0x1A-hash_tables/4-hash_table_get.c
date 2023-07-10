#include "hash_tables.h"
/**
 * hash_table_get - function that  retrieves value associeted a with key
 * @ht: ash table you want to look into
 * @key: key you are look for
 *
 * Return: the value if key is found or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *mem;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	mem = ht->array[index];

	while (mem)
	{
		if (!strcmp(key, mem->key))
			return (mem->value);
		mem = mem->next;
	}
	return (NULL);
}
