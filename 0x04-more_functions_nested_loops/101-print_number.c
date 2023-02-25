#include "main.h"
#include <stdio.h>

/**
 * print_number - print the number given
 * @n : given number
 */
void print_number(int n)
{
int num = n;

if (num / 10)
{
print_number(num / 10);
}
if (n < 0)
{
putchar(45);
num = -num;
}

putchar(num % 10 + 48);
return;
}
