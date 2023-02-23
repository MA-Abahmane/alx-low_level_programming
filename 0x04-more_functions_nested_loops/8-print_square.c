#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square with '#'
 * @size: given hight and withs of the square
 * Return: None
 */

void print_square(int size)
{
int a, b;

if (size > 0)
{
a = 0;

while (a < size){
b = 0;

while (b < size)
{
putchar(35);
++b;
}
putchar('\n');
a++;
}
}

else
{
putchar('\n');
}
}
