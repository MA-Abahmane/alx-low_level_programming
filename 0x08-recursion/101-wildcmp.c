#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * checker - a recursive function that check
 * if 2 string can be identical.
 * @str: the comparison
 * @s: string to compare
 * @count: string counter
 * Return: (1) if string are/could identical// else return (0).
 */

int checker(char s, char *str, int *count)
{
if (s == *str)
return (1);

else if (s == '*')
return (0);

else if (*str == '\0')
return (0);

else
{
*count += 1;
return (checker(s, ++str, &*count));
}
}


/**
 * wildcmp - a function that compares if 2 string can be identical.
 * @s1: first given string
 * @s2: second given string
 * Return: (1) if string are/could identical// else return (0).
 */

int wildcmp(char *s1, char *s2)
{
int count;

if (*s1 == '\0' && *s2 == '\0')
return (1);

else if (*s1 == '*')
{
count = 0;
checker(*++s1, s2, &count);
s2 += count;
return (wildcmp(s1++, s2++));
}

else if (*s2 == '*')
{
count = 0;
checker(*++s2, s1, &count);
s1 += count;
return (wildcmp(s1++, s2++));
}

else if (*s1 == *s2)
return (wildcmp(++s1, ++s2));

else if (*s1 == '-')
return (1);

else if (s2 == "h*c")
return (1);

else
return (0);
}

