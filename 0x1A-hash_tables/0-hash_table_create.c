#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;

	if (size == 0)
		return (NULL);

	my_table = calloc(1, sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);

	my_table->size = size;
	my_table->array = calloc(size, sizeof(hash_node_t *));
	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}
	return (my_table);
}
