#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: Given string
 * @assept: number of bytes given
 * Return: The resulte of the byte search
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int num = strspn(s, accept);
return (num);
}

