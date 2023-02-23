#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - find out if the int c is a number
* @c: given int
* Return: 0 alltimes
*/

int _isdigit(int c)
{
if (isdigit(c))
{
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar('1');
  
}
else
{
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar('0');
}
  
return (0);
}
