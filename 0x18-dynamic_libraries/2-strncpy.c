#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy -  a function that copies a string.
 * @dest: 1st given string
 * @src:  2end given string
 * @n: given Index number
 * Return: return the copyed string
 */

char *_strncpy(char *dest, char *src, int n)
{
char *str;

str = strncpy(dest, src, n);
return (str);
}
