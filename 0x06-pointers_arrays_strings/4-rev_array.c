#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array of integers.
 * @a: given array
 * @n:  array size
 * Return : return the compared tring resulte
 */

void reverse_array(int *a, int n)
{
int i, num;

for (i = (n - 1); i >= 0; i--)
{
num = a[i];
if (a[i] == 0)
{
printf("%d", num);
}
else
{
printf("%d, ", num);
}
}

putchar('\n');
return;
}
