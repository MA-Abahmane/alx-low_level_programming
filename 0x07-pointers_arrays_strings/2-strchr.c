#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - a function that copies memory area
 * @s: Given string to search
 * @c: The string or caracter to find
 * Return: The resulte of the search
 */

char *_strchr(char *s, char c)
{
char *str = strchr(s, c);
return (str);
}
