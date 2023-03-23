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
unsigned int i;
va_list ptr;
char *s;

if (*separator == 0 || separator == NULL)
s = "";
else
s = (char *) separator;

va_start(ptr, n);


if (n > 0)
printf("%d", va_arg(ptr, int));

i = 1;
while (i < n)
{
printf("%s%d", s, va_arg(ptr, int));

i++;
}
printf("\n");

va_end(ptr);
}
