#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_diagonal - print half a piramid
* @n: given hight of the piramid
* Return: None
*/

void print_diagonal(int n)
{
int l, m;

m = 0;

while (n > 0)
{
l = m;

while (l > 0)
{
putchar(' ');
--l;
}
putchar('\\');
putchar('\n');
n--;
m++;
}

if (n <= 0)
putchar('\n');

return;
}
