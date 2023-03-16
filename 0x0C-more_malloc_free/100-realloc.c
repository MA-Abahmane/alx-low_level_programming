#include <stdlib.h>

/**
 * memo_cpy - Copy n bytes from memory area src to memory area dest
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Amount to copy from memory area
 *
 * Return: Pointer to area
 */
char *memo_cpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _realloc - Reallocate a memory block using malloc
 * @ptr: Old memory block
 * @old_size: Size of of old memory block
 * @new_size: Size the new memory block should be
 *
 * Return: Pointer to new memory space, NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;
	unsigned int min;

	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
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
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	ar = memo_cpy(ar, ptr, min);
	free(ptr);
	return (ar);
}
