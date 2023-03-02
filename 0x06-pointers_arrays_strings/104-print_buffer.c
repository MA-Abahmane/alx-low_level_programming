#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * @b: given buffer
 * @size: size of the buffer b
 * Return: return the result of the concatination
 */

void print_buffer(char *b, int size)
{
int count = 0, j, i;

if (size <= 0)
{
putchar('\n);
return;
}

while (size > count)
{
j = size - count < 10 ? size - count : 10;
printf("%08x: ", count);

for (i = 0; i < 10; i++)
{

if (i < j)
printf("%02x", *(b + count + i));
else
printf("  ");

if (i % 2)
printf(" ");
}

for (i = 0; i < j; i++)
{
int n = *(b + count + i);

if (n < 32 || n > 132)
n = '.';
printf("%c", n);
}

putchar('\n')
count += 10;
}
}
