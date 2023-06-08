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


if (key == NULL || ht == NULL)
return (0);

/* get the index of the key */
idx = key_index((const unsigned char *)key, ht->size);

/* set the new node */
newNode = malloc(sizeof(hash_node_t));
if (newNode == NULL)
return (0);

newNode->key = strdup((char *)key);
newNode->value = strdup((char *)value);
newNode->next = NULL;

/* check if the key contains no values */
if (ht->array[idx] == NULL)
{
ht->array[idx] = newNode;
}
/* if node has sub values */
else
{
/* if the keys are same; replace the node */
currnt = ht->array[idx];
if (strcmp(currnt->key, key) == 0)
{
newNode->next = currnt->next;
ht->array[idx] = newNode;
free(currnt);
return (1);
}

/* check all sub value of the key for any match */
while (currnt->next != NULL || strcmp(currnt->key, key) != 0)
currnt = currnt->next;

if (strcmp(currnt->key, key) == 0)
{
newNode->next = currnt->next->next;
my_free(currnt->next);
currnt->next = newNode;
return (1);
}
/* no match; set the value as the head node */
else
{
newNode->next = ht->array[idx];
ht->array[idx] = newNode;
}
}

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
