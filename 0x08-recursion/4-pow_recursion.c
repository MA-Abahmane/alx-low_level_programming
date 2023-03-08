#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power of y.
 * @x: base number
 * @y: power
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{

if (y == 0)
{
return(1);
}

if
{
(y < 0) return (-1);
}

return (_pow_recursion(x, y - 1) * x);
}
