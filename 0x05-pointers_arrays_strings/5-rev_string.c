#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - a function that prints a string, followed by a new line.
 * @s: given string
 * Return: None
 */

void rev_string(char *s)
{
int i;

for(i = (strlen(s)-1); i >= 0; i--)
{
printf("%c", s[i]);
}
putchar('\n')
}
