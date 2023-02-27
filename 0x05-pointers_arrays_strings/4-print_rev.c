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
int i;

for (i = (strlen(s) - 1); i >= 0; i--)
{
printf("%c", s[i]);
}
putchar('\n');
}
