#include "hash_tables.h"


/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @str: given string to convert to hash value
 *
 * Return: a pointer to the newly created hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash = 5381;



	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
