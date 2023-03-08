#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: base number
 * @base: base == n
 * Return: return the natural square root of n.
 */

int tester(int power, int base)
{

if (power * power == base)
return (power);

if (power * power > base)
return (-1);

return (tester(power + 1, base));
}

int _sqrt_recursion(int n)
{
return (tester(1, n));
}
