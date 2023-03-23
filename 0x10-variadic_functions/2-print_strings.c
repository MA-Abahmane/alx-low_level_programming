#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @n: number of given arguments.
 * @separator: given argument seperator.
 *
 * Return: NONE.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s = "";
va_list ptr;

va_start(ptr, n);

i = 0;
while (i < n)
{
s = va_arg(ptr, char*);

if (s != NULL)
printf("%s", s);
else
printf("(nil)");

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

i++;
}
putchar('\n');

va_end(ptr);
}
