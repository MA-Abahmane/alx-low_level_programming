#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include "main.h"

/**
 * *leet -   a function that encodes a string into 1337.
 * @str: given string
 * Return: return string after transformation
 */

char *leet(char *str)
{
int i, j;
char *s = str;
char car[] = {'a', 'e', 'o', 'l', 't'};
char num[] = {'4', '3', '0', '1', '7'};

j = 0;
while (*str)
{
for (i = 0; i < 5; i++)
{
if (s[j] == car[i] || s[j] == toupper(car[i]))
{
s[j] = num[i];
}
}
j++;
str++;
}

return (s);
}
