#include "hash_tables.h"

/**
 * key_index - a hash function implementing the djb2 algorithm.
 * @key: key is the key
 * @size: size is the size of the array of the hash table
 *
 * Return: the index at which the key/value pair
 *    should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
