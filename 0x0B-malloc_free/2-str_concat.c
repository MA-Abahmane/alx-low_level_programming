#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: 1st given string
 * @s2: 2end given string
 * Return: "NULL" if s1 or s2s size is 0 / else return the allocated
 * memory location for the concatinated string.
 */
char *str_concat(char *s1, char *s2)
{
char *ar;
int i, j;

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
return (s2);
}
if (s2 == NULL)
{
return (s1);
}
  
int size1 = strlen(s1), size2 = strlen(s2);
int full_size = size1 + size2;

ar = malloc(sizeof(char) * full_size + 1);

i = 0;
while (i < size1)
{
ar[i] = s1[i];
i++;
}  
j = 0;
while (i < size1 + size2)
{
ar[i] = s2[j];
j++;
i++;
}
ar[i] = '\0';
return (ar);
}
