#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function. 
 * @grid: given 2D array
 * @height: arrays height
 * Return: NONE
 */

void free_grid(int **grid, int height)
{
  int i;
  for (i = 0; i < height; i++)
    {
      free(grid[i]);
    }
  free(grid);
}
