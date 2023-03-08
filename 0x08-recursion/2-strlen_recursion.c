#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: given string
 * Return: the length of the string s
 */

int _strlen_recursion(char *s)
{
int car;

if (s[0] != '\0')
{
car = _strlen_recursion(s + 1);
return (1 + car);
}
return (0);
}
