#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Write a function that allocates memory for 
 * an array using malloc.
 * @nmemb: number of elements in the array
 * @size: number of bytes each element takes
 *
 * Return: "NULL" if size or nmemb is equal to 0 / else return the allocated
 * memory location for the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int i;
char *ar;

if (nmemb == 0 || size == 0)
return (NULL);

ar = malloc(nmemb * size);

if (ar == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
{
ar[i] = 0;
}

return (ar);
}
