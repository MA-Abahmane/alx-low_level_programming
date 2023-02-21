#include "main.h"
#include <stdio.h>

/**
 * main.h - Entry point
 *
 * Description: [A a function that computes the absolute value of an integer]
 *
 * Return: Always abs_val
 *
 * code by: MAAbahmane
 */
int print_last_digit(int m)
{
int lst_dig, c, i;

lst_dig = m % 10;

for (i = 48; i < 58; i++)
{
if (_putchar(i) == _putchar(lst_dig))
{
c = i;
}
}
_putchar(c);
  
return (0);
}
