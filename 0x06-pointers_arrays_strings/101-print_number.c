#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *print_number - a function that prints an integer.
 * @n: given number
 * Return: Nothing
 */

void print_number(int n)
{
int a = 10;
unsigned int number;

if (n < 0)
{
_putchar('-');
number = -n;
}

else
number = n;

if (number / a)
print_number(number / a);

_putchar((number % a) + 48);
}
