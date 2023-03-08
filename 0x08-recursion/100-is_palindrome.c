#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * checker - a recursive function that check if string is palindrome.
 * @str: given string to check
 * @s1: biggining of the string
 * @s2: ending of the string
 * Return: (1) if string is apalindrom // else return (0).
 */


int checker(char str[], int s1, int s2)
{
/* If there is only one character */
if (s1 == s2)
{
return (1);
}

/* If first and last
characters don't match */
if (str[s1] != str[s2])
{
return (0);
}

/* If there are more than
two characters, check if
middle substring is s
palindrome. */
if (s1 < s2 + 1)
{
return checker(str, s1 + 1, s2 - 1);
}
return (1);
}