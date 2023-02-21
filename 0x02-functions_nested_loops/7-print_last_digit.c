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
int lst_dig;

lst_dig = (m % 10);

if (lst_dig < 0)
{
lst_dig = lst_dig * -1; 
}
_putchar('0'+ lst_dig);
return (0);
}
