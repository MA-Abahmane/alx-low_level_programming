#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_most_numbers - print '_' times the given number n
* @n: given times to print '_'
* Return: 0 alltimes
*/

void print_line(int n)
{
int m;

if (n > 0)
{
m = 0;

while (m < n)
{
_putchar('_');
m++;
}
}

return;
}
