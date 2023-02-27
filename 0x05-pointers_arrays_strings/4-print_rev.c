#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - a function that prints string in reverse.
 * @s: given string
 * Return: None
 */

void print_rev(char *s)
{
int i, j;
j = (strlen(s) - 1);

for (i = j; i >= 0; i--)
{
printf("%c", s[i]);
}
putchar('\n');
}

