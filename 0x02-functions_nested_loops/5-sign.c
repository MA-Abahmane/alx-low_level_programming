#include "main.h"

/**
 * main.h - Entry point
 *
 * Description: [ A function that prints the sign of a number]
 *
 * Return: Always 1, 0, or -1
 *
 * code by: MAAbahmane
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
