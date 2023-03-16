#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * memo_cpy - a function that copys n bytes from memory srce 
 *to memory dest
 * @dest: given empty memory area to copy to
 * @srce: given memory to copy from
 * @n: Amount of bytes to copy from a memory area
 * Return: Pointer to the allocated memory area
 */
char *memo_cpy(char *dest, char *srce, unsigned int n)
{
	unsigned int i = 0;
  
while (i < n)
{
dest[i] = srce[i];
++i;
}
return (dest);
}


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
unsigned int n;
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

if (new_size < old_size)
n = new_size;
else
n = old_size;

ar = malloc(new_size);

if (ar == NULL)
return (NULL);

ar = memo_cpy(ar, ptr, n);
free(ptr);

return (ar);
}
