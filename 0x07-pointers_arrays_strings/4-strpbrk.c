#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 * @s: Given string
 * @accept: given string of letters to search for
 * Return: return only the letters found
 */

char *_strpbrk(char *s, char *accept)
{
char *str = strpbrk(s, accept);
return (str);
}
