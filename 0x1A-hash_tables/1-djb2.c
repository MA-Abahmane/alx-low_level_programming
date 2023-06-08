#include "hash_tables.h"


/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @str: given string to conver to hash value
 *
 * Return: a pointer to the newly created hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
int c;
unsigned long int Hsh = 5381;

/* calculates a hash value for a given */
/* string using the djb2 algorithm */
while ((c = *str++))
{
hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
}

return (Hsh);
}
