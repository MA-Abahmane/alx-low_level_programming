#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 
 * dimensional array of integers.
 * @width: arrays width
 * @height: arrays height
 * Return: "NULL" if width or height is 0 or less 
 * / else return the the 2D array
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **ar;

if (width <= 0  || width <= 0)
{
return NULL;
}

ar = malloc(sizeof(int *) * height);
if ( ar == NULL)
  return NULL;

i = 0;
while (i < height)
{
  ar[i] = malloc(sizeof(int) * width);
  if (ar[i] == NULL)
  {
    return (NULL);
  }
  i++;
}

for (i = 0; i < height; i++)
{
  for (j = 0; j < width; j++)
  {
    ar[i][j] = 0;
  }
}

return (ar);
}
