#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - find out if the char c is uppercase
* @c: given car
* Return: 0 alltimes
*/

int _isupper(int c)
{
if (isupper(c))
{
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar('1');
}
else if (islower(c))
{
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar('0');
}
else
{
_putchar(c);
_putchar(':');
_putchar('0');
}
return (0);
}
