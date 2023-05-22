#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concat 2 given strings and return the result
 * @dest: 1st given string
 * @src:  2end given string
 * Return: return the result of concatination
 */
char *_strcat(char *dest, char *src)
{
char *str;

str = strcat(dest, src);
return (str);
}
