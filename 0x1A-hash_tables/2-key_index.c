#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Calculate the index of a key in a hash table
 * @key: The key
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);

	return (hash_code % size);
}

