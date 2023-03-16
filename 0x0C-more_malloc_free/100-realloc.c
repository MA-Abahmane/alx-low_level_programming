#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Write a function that allocates memory for
 * an array using malloc.
 * @ptr: ptr is a pointer to the memory previously
 *allocated with a call to malloc: malloc(old_size)
 * @old_size: the old size of ptr in memory
 * @new_size: the new size of ptr in memory
 * Return: "NULL" if s1 or s2s size is 0 / else return the allocated
 * memory location for the concatinated string.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *ar;

if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
ar = malloc(new_size);
return (ar);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

ar = realloc(ptr, new_size);
free(ptr);

if (ar == NULL)
{
return (NULL);
}

return (ar);
}
