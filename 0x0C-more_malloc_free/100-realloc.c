#include <stdlib.h>
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
	void *nptr;
	unsigned int min;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	nptr = memo_cpy(nptr, ptr, min);
	free(ptr);
	return (nptr);
}
