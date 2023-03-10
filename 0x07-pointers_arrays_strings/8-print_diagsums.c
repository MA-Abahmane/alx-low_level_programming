#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the chessboard.
 * @a: given intiger array
 * @size: given array size
 * Return: NONE
 */

void print_diagsums(int *a, int size)
{
int i, j;
int sum1, sum2;

i = 0;
sum1 = 0;
while (i < (size * size))
{
sum1 += a[i];
i += size + 1;
}

j = (size - 1);
sum2 = 0;
while (j < (size * size - 1))
{
sum2 += a[j];
j += (size - 1);
}

printf("%d, %d\n", sum1, sum2);
return;
}

