#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: given string
 * Return: None
 */

void puts_half(char *str)
{
int i;

for(i = 0; i <= (strlen(str)-1); i++)
{
if (i >= strlen(str) / 2)
{
printf("%c", str[i]);
}
}
putchar('\n');
}
