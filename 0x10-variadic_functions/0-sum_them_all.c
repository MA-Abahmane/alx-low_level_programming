#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all
 * its parameters.
 * @n: given numbers
 *
 * Return: the sum of given numbers.
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int i
int sum;

va_list ptr;

if (n == 0)
return (0);

va_start(ptr, n);

i = 0;
sum = 0;
while (i < n)
{
sum += va_arg(ptr, int);
i++;
}

va_end(ptr);

return (sum);
}
