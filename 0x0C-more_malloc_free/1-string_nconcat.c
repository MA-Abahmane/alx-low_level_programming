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
char *ar;
unsigned int i, j, len, size;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[len] != '\0')
{
++len;
}
size = sizeof(*ar) * (len + n)
ar = malloc(size + 1);

if (ar == NULL)
{
return (NULL);
}

i = 0;
while (i < size && s1[i] != '\0')
{
ar[i] = s1[i];
i++;
}

j = 0;
while (i < size && s2[j] != '\0')
{
ar[i] = s2[j];
j++;
i++;
}
ar[i] = '\0';

return (ar);
}
