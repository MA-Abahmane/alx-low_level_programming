#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - a function that prints a string, followed by a new line.
 * @str: given string
 * Return: None
 */

void puts2(char *str)
{
int i;

for(i = 0; i = (strlen(str)-1); i++)
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
}
putchar('\n');
}
