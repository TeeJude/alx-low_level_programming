#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to which key/value is to be added or updated
 * @key: key to add element
 * @value: value associated with the key added
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *dup_value, *keycopy;
	hash_node_t  *mem, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	dup_value = strdup(value);
	if (!dup_value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	mem = ht->array[index];

	while (mem)
	{
		if (!strcmp(key, mem->key))
		{
			free(mem->value);
			mem->value = dup_value;
			return (1);
		}
		mem = mem->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
