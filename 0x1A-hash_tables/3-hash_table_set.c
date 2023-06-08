#include "hash_tables.h"
/**
 * hash_table_set - a hash function implementing the djb2 algorithm.
 * @ht: ht is the hash table you want to add
 * @key: key is the key
 * @value: value is the value associated with the key
 * Return: the index at which the key/value pair
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *newNode, *currnt;

if (key == NULL || ht == NULL || value == NULL)
return (0);
idx = key_index((unsigned char *)key, ht->size);
newNode = malloc(sizeof(hash_node_t));
if (newNode == NULL)
return (0);
/* check all keys for any match. no match; set the node as the head node */
currnt = ht->array[idx];
while (currnt != NULL)
{
if (strcmp(currnt->key, key) == 0)
{
free(currnt->value);
currnt->value = strdup(value);
if (currnt->value == NULL)
return (0);

return (1);
}
currnt = currnt->next;
}
newNode->key = strdup(key);
if (newNode->key == NULL)
{
free(newNode);
return (0);
}
newNode->value = strdup(value);
if (newNode->value == NULL)
{
free(newNode->key);
free(newNode);
return (0);
}
newNode->next = ht->array[idx];
ht->array[idx] = newNode;
return (1);
}
