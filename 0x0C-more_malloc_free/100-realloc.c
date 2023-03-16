#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - a function that allocates memory for
 * an array using malloc.
 * @ptr: ptr is a pointer to the memory previously
 *allocated with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: "NULL" if s1 or s2s size is 0 / else return the allocated
 * memory location for the concatinated string.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ar;

if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
ar = malloc(new_size);
return (ar);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ar = realloc(ptr, new_size);

if (ar == NULL)
{
return (NULL);
}

free(ptr);
return (ar);
}
