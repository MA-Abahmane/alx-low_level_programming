#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * checker - Prime number checker checker
 * @i: counter
 * @j: given number
 * Return: number type
 */
int checker(int i, int j)
{
if (i < j)
{

if (j % i == 0)
{
return (0);
}

else
{
return (checker(i + 1, j));
}
}

if (j < 2)
{
return (0);
}

return (1);
}

/**
 * is_prime_number - a function that returns 1 if 
 * the input integer is a prime number, otherwise return 0
 * @n: given number to check.
 * Return: number type
 */
int is_prime_number(int n)
{
return (checker(2, n));
}
