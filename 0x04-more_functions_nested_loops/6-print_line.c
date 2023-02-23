#include <stdio.h>
#include "main.h"

/**
* print_line - print '_' times the given number n
* @n: given times to print '_'
* Return: None
*/

void print_line(int n)
{
int m;

if (n > 0)
{
m = 0;

while (m < n)
{
putchar('_');
m++;
}
putchar('\n');
}
else
{
putchar('\n');
}
return;
}
