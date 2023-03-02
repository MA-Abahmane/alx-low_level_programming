#include <stdio.h>
#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: 1st given string
 * @s2:  2end given string
 * Return: return the compared tring resulte
 */

int _strcmp(char *s1, char *s2)
{
while ((*s1 == *s2) && *s1)
{
s1++;
++s2;
}
return (*s1 - *s2);
}
