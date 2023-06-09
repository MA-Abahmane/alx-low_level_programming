#include "hash_tables.h"


/**
 * shash_table_create - a function that creates a hash table.
 * @size: size is the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned long int i;
shash_table_t *hashT;

/* setting the hash table */
hashT = malloc(sizeof(shash_table_t));
if (hashT == NULL)
return (NULL);

/* setting the tables nodes */
hashT->size = size;
hashT->shead = NULL;
hashT->stail = NULL;
hashT->array = malloc(size * sizeof(shash_node_t *));
if (hashT->array == NULL)
{
free(hashT);
return (NULL);
}

/* setting all table nodes to null */
for (i = 0; i < size; i++)
{
hashT->array[i] = NULL;
}

return (hashT);
}


/**
 * shash_table_set - a function
 * @ht: table
 * @key: is the key
 * @value: is the value
 * Return: None
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
(void)ht;
(void)key;
(void)value;
return (0);
}


/**
 * shash_table_get - a function
 * @key: is the key
 * @ht: table
 * Return: None
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
(void)ht;
(void)key;
return (NULL); 
}

/**
 * shash_table_print_rev - a function
 * @ht: table
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
(void)ht;
return;
}




/**
 * shash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
int f;
shash_node_t *node;


if (ht == NULL)
return;


printf("{");
f = 0;
node = ht->shead;
while (node != NULL)
{
if (f == 1)
printf(", ");

printf("'%s': '%s'", node->key, node->value);
node = node->snext;
f = 1;

}

printf("}\n");
}


/**
 * shash_table_delete - a function that prints a hash table.
 * @ht: is the hash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *ptr;
unsigned int i;

i = 0;
/* loop throut the hash table */
while (i < ht->size)
{
node = ht->array[i];
/* free node if its not NULL */
while (node)
{
ptr = node;
node = node->next;
free(ptr->value);
free(ptr->key);
free(ptr);
}

i++;
}
free(ht->array);
free(ht);
}

