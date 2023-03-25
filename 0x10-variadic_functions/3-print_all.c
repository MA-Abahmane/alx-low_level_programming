#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments
 *  passed to the function
 *
 * Return: NONE.
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list ptr;
char *s, *sepr = "";

va_start(ptr, format);
if (format)
{
while (format[i])
{
switch (format[i]) /* Switch case */
{
case 'i':
printf("%s%d", sepr, va_arg(ptr, int));
break;
case 'c':
printf("%s%c", sepr, va_arg(ptr, int));
break;
case 'f':
printf("%s%f", sepr, va_arg(ptr, double));
break;
case 's':
s = va_arg(ptr, char *);

if (!s)
s = "(nil)";
printf("%s%s", sepr, s);
break;
default:
++i;
continue;
}
sepr = ", ";
++i;
}
}
putchar('\n');
va_end(ptr);
}
