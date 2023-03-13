#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: given string
 *
 * Return: "NULL" if size is 0 / else return the allocated
 * memory location.
 */

char *_strdup(char *str)
{
char *ar;
int i, str_size;

if (str == NULL)
{
return (NULL);
}

str_size = strlen(str);
ar = malloc(sizeof(char) * str_size + 1);

i = 0;
while (i < str_size)
{
ar[i] = str[i];
++i;
}
ar[i] = '\0';

return (ar);
}
