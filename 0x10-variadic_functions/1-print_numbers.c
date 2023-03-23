#include "variadic_functions.h"
#include<stdio.h>
#include <stdarg.h>

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
unsigned int i;
va_list ptr;

va_start(ptr, n);

i = 0;
while (i < n)
{
printf("%d", va_arg(ptr, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

i++;
}
printf("\n");

va_end(ptr);
}
