#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concat 2 given strings using 'strncat()' and return the result
 * @dest: 1st given string
 * @src:  2end given string
 * @n: given Index number
 * Return: return the result of the concatination
 */

char *_strncat(char *dest, char *src, int n)
{
char *str;

str = strncat(dest, src, n);
return (str);
}
