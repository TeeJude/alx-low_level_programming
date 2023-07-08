#include "hash_tables.h"

/**
 * key_index - get index for key given
 * @key: key to hash
 * @size: size of the array of the hash table
 *
 * Return: index of the location at which key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
