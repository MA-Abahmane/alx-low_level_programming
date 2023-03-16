#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * array_range - Write a function that creates an array of integers.
 * @min: the starting number of the array
 * @max: the ending number of the array
 *
 * Return: "NULL" if min is larger then max / else return the
 * pointer to the newly created array
 */

int *array_range(int min, int max)
{
int i, min_cpy;
int *ar;

if (min > max)
{
return (NULL);
}

ar = malloc(sizeof(int) * ((max - min) + 1));

if (ar == NULL)
{
return (NULL);
}

i = 0;
min_cpy = min;
while (min_cpy <= max)
{
ar[i] = min_cpy;
++i;
min_cpy++;
}

return (ar);
}
