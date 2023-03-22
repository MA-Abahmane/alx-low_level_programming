#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: given array
 * @size: size of the array
 * @action: given function to execute
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
while (i < size)
{
action(array[i]);
++i;
}
}
