#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * *cap_string -  a function that capitalizes all words of a string.
 * @str: given string
 * Return: return string after transformation
 */

char *cap_string(char *str)
{
int j;

j = 0;
while (str[j] != '\0')
{

if (str[j - 1] == ' ' || str[j - 1] == '.')
{
str[j] = toupper(str[j]);
}

else if (str[j - 1] == '\n' || str[j - 1] == '\t')
{
str[j] = toupper(str[j]);
}

else
{
str[j] = str[j];
}

++j;
}

return (str);
}
