#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: Size of the memory to allocate
 * Return: pointer to the allocated memory if malloc is not null
 * else return exit(98).
 */

void *malloc_checked(unsigned int b)
{
char *ar;

ar = malloc(b);

if (ar != NULL)
{
return (ar);
}

exit(98);
}
