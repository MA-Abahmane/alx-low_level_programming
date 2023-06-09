#include "hash_tables.h"

/**
 * hash_table_delete - a function that prints a hash table.
 * @ht: is the hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node = NULL, *ptr = NULL;
unsigned int i;

i = 0;
/* loop throut the hash table */
while (i < ht->size)
{
node = ht->array[i];
/* free node if its not NULL */
while (node != NULL)
{
ptr = node->next;
free(node->value);
free(node->key);
free(node);
node = ptr;
}

i++;
}
free(ht->array);
free(ht);
}
