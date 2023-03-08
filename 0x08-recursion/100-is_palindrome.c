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

if (s1 == s2)
{
return (1);
}

if (str[s1] != str[s2])
{
return (0);
}

if (s1 < s2 + 1)
{
return (checker(str, s1 + 1, s2 - 1));
}
return (1);
}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: given string to check
 * Return: (1) if string is apalindrom // else return (0).
 */

int is_palindrome(char *s)
{
int n = strlen(s);

if (n == 0)
return (1);

return (checker(s, 0, n - 1));
}
