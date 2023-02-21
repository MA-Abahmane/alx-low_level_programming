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
int lst_dig = m % 10;

_putchar(lst_dig);

return (lst_dig);
}
