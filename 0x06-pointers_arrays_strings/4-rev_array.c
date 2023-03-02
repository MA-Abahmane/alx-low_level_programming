#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a function that reverses arrays integers.
 * @a: given array
 * @n:  array size
 * Return: None
 */

void reverse_array(int *a, int n)
{
int temp;

for (int i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
