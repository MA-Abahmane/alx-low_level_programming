#include "hash_tables.h"

/**
 * hash_table_delete - a function that prints a hash table.
 * @ht: is the hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *ptr;
unsigned long int i;


if (ht == NULL)
return;

i = 0;
/* loop throut the hash table */
while (i < ht->size)
{
node = ht->array[i];
/* free node if its not NULL */
while (node != NULL)
{
ptr = node;
node = node->next;
free(ptr->key);
free(ptr->value);
free(ptr);
}

++i;
}
free(ht->array);
free(ht);
}
