#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: given intiger array
 * @size: given array size
 * Return: NONE
 */

void print_diagsums(int *a, int size)
{
int i, j;
unsigned int sum1, sum2;

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
putchar('\n');
return;
}

