#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - function that changes lowercase to uppercase.
 * @str: given string
 * Return : return the compared tring resulte
 */

char *string_toupper(char *str)
{
int j, arrSize;
char *s;

j = 0;
while (str[j] != '\0')
{
str[j] = toupper(str[j]);
++j;
}
return (str);
}
