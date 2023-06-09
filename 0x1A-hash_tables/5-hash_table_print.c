#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
int f;
hash_node_t *node;
unsigned long int i;


if (ht == NULL)
return;

i = 0;
f = 0;
printf("{");
/* loop throut the hash table */
while (i < ht->size)
{
node = ht->array[i];
/* get the node values if its not NULL */
while (node != NULL)
{
if (f == 1)
printf(", ");

printf("'%s': '%s'", node->key, node->value);
node = node->next;
f = 1;
}

++i;
}

printf("}\n");
}
