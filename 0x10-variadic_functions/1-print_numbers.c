#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @n: number of given arguments.
 * @separator: given argument seperator.
 *
 * Return: NONE.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list ptr;

va_start(ptr, n);

i = 0;
while (i < n)
{
printf("%d", va_arg(ptr, int));

if (i < n - 1)
{
if (separator == NULL)
printf("%s", separator);
else
printf("%s", separator);
}

i++;
}
putchar('\n');

va_end(ptr);
}
