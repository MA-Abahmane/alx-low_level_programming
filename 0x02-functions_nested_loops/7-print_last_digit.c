#include "main.h"

/**
 * print_last_digit - print the last digit of given number
 *
 * @m: given number
 *
 * Return: lst_dig
 */
int print_last_digit(int m)
{
int lst_dig;

lst_dig = (m % 10);
if (lst_dig < 0)
{
lst_dig = lst_dig * -1;
}
_putchar('0' + lst_dig);
return (lst_dig);
}
