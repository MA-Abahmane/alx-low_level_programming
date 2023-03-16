#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: 1st given string
 * @s2: 2end given string
 * @n: The number of caracters to print from the 2end string
 * Return: "NULL" if s1 or s2s size is 0 / else return the allocated
 * memory location for the concatinated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ar = NULL;
int i, j, size1, size2, full_size;

if (s1 == 0)
{
s1 = "";
}
if (s2 == 0)
{
s2 = "";
}

size1 = strlen(s1);
size2 = strlen(s2);
full_size = size1 + size2;

ar = malloc(sizeof(char) * (full_size + 1));

if (ar != NULL)
{
i = 0;
while (i < size1)
{
ar[i] = s1[i];
i++;
}

j = 0;
while (i < size1 + n)
{
ar[i] = s2[j];
j++;
i++;
}
}
return (ar);
}
