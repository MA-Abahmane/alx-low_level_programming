#include "hash_tables.h"


/**
 * hash_table_set - a hash function implementing the djb2 algorithm.
 * @ht: ht is the hash table you want to add
 * @key: key is the key
 *
 * Return: the index at which the key/value pair
 *    should be stored in the array of the hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *currnt;


if (key == NULL || ht == NULL)
  return (NULL);

/* get the index of the key */
idx = key_index((const unsigned char *)key, ht->size);
currnt = ht->array[idx];
if (currnt == NULL)
return (NULL);

/* look for a matching key */
while (currnt != NULL && strcmp(currnt->key, key) != 0)
currnt = currnt->next;

/* if non found */
if (currnt == NULL)
return (NULL);
else
return (currnt->value);
}