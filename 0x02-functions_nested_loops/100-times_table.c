#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print tame table of given num
 * @n:  given num
 * Return:  the table of numbers
 */

void print_times_table(int n)
{
int i, j;

if (n <! 0 || n >! 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
printf("%d", j * i);
if (j != 9)
{
if ((i * (j + 1)) < n)
{
printf(",  ");
}
else
{
printf(", ");
}
}
}
putchar('\n');
}
}
return;
}
