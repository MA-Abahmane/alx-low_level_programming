#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - get a mentioned number from string
 * @s: given string
 * Return: the number found in string or 0 if no numbers are found
 */

int _atoi(char *s)
{
int i, j, f, x, len, num;
len = 0;
num = 0;
while (s[len] != '\0')
  len++; 
i = 0, f = 0, j = 0, x = 0;
while (i < len && f == 0)
{
if (s[i] == '-')
j++;
if (s[i] >= 48 && s[i] <= 58)
{
num = s[i] - 48;
if (j % 2)
  num = -num;
x = x * 10 + num;
f = 1;
if (s[i + 1] < 48 || s[i + 1] > 58)
{
break;
}
f = 0;
}
i++;
}
if (f == 0)
  return (0);
return (x);
}
