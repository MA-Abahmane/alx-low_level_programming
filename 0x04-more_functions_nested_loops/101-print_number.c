#include <stdio.h>
#include "main.h"

/**
 * print_number - print the number given
 * @n : given number
 */
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
putchar('-');
num = -n;
}
else
num = n;

if (num / 10)
print_number(num / 10);

putchar((num % 10) + '0');
}
