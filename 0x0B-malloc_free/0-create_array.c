#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * then initializes it with a specific char.
 * @c: Given character
 * @size: the size of the memory to allocate for the char
 *
 * Return: "NULL" if size is 0 / else return the filles
 * memory location.
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;

if (size <= 0)
{
return (NULL);
}

ar = malloc(sizeof(char) * size);

i = 0;
while (i < size)
{
ar[i] = c;
++i;
}
ar[i] = 0;

return (size < 1 ? 0 : ar);
}
