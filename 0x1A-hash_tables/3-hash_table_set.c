#include "hash_tables.h"

/**
 * hash_table_set - a hash function implementing the djb2 algorithm.
 * @ht: ht is the hash table you want to add
 * @key: key is the key
 * @value: value is the value associated with the key
 *
 * Return: the index at which the key/value pair
 *    should be stored in the array of the hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *newNode, *currnt;


if (key == NULL || ht == NULL || value == NULL)
return (0);

/* get the index of the key */
idx = key_index((unsigned char *)key, ht->size);

/* allocating the new node */
newNode = malloc(sizeof(hash_node_t));
if (newNode == NULL)
return (0);

/* check all sub value keys for any match */
currnt = ht->array[idx];
while (currnt->next != NULL)
{
/* if match found; undate key value */
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

/* no match; set the node as the head node */
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


/**
 * my_free - free a node from the hash table
 * @node: node to free
 */
void my_free(hash_node_t *node)
{
free(node->key);
free(node->value);
free(node);
}
