#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * *rot13 -  a function that encodes a string using rot13.
 * @str: given string
 * Return: return string after transformation
 */
char *rot13(char *str)
{
char x, *s = str;

while (*str)
{
x = ((*str & 32) + 65);

if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
{
*str = (x + (*str - x + 13) % (43 - 17));
}

++str;
}

return (s);
}
