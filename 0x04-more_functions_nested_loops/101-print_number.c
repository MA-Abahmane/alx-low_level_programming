#include <stdio.h>
#include "main.h"

/**
 * print_number - print the number given
 * @n : given number
 * Return: None
 */
void print_number(int n);
{
unsigned int num = n;

if (n < 0)
{
num = -num;
putchar('-');
}
if (0 < (num / 10))
{
printf("%d", num / 10);
}
putchar((num % 10) + '0');
return;
}
