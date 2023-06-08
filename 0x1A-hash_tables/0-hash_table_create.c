#include "hash_tables.h"


/**
 * hash_table_create - a function that creates a hash table.
 * @size: size is the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *hashT;

/* setting the hash table */
hashT = malloc(sizeof(hash_table_t));
if (hashT == NULL)
return (NULL);

/* setting the tables nodes */
hashT->size = size;
hashT->array = malloc(sizeof(hash_node_t *) * size);
if (hashT->array == NULL)
return (NULL);

/* setting all table nodes to null */
for (; i < size; i++)
{
hashT->array[i] = NULL;
}

return (hashT);
}
