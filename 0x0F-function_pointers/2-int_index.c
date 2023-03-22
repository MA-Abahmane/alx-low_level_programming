#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: given array
 * @size: size of the array
 * @cmp: given function to search
 * Return: index of the integer if found | if failed return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (!cmp || array == NULL)
return;

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
