#include "main.h"
#include <stdio.h>

/**
 * print_number - print the number given
 * @n : given number
 */

void print_number(int n)
{
int a = 10;
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -n;
}
else
num = n;

if (num / a)
print_number(num / a);

_putchar((num % a) + 48);
}

