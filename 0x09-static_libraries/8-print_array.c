#include <stdio.h>
#include "main.h"

/**
 * print_array -  a function that prints array values.
 * @a: given array
 * @n: number of elements of the array to be printed
 * Return: None
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i <= (n - 1); i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}

