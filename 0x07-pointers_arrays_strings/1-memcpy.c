#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - a function that copies memory area
 * @dest: The new destination array where the content
 * will be copied
 * @src:  The original destination of the data to copy
 * @n:    The number of bytes to be copied
 * Return: the buffer after the changes are made
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
dest = memcpy(dest, src, n);
return (dest);
}
