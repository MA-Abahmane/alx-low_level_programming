#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * @b: given buffer
 * @size: size of the buffer b
 * Return: None
 */

void print_buffer(char *b, int size)
{
int i, j, count;

if (size <= 0)
{
putchar('\n');
return;
}

count = 0;
while (size > count)
{
j = (size - count) < 10 ? (size - count) : 10;
printf("%08x: ", count);

for (i = 0; i < 10; i++)
{

if (i < j)
printf("%02x", *(count + i + b));
else
printf("  ");

if (i % 2)
{
putchar(' ');
}
}

for (i = 0; i < j; i++)
{
int n = *(count + i + b);

if (n <= 31 || n >= 131)
n = '.';
printf("%c", n);
}

putchar('\n');
count += 10;
}
}
