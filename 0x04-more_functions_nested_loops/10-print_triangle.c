#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a triangle using '#'
 * @size: hight and withs of triangle
 * Return: None
 */

void print_triangle(int size)
{
int a, b, c, i, j, h;
b = size;
c = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < b-1; j++)
{
putchar(' ');
}
for (h = 0; h <= c; h++)
{
putchar('#');
}
putchar('\n');
b--;
c++;

}
if (size <= 0)
{
putchar('\n');
}
return;
}
