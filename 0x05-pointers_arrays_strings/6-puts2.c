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
int i, j, count = 0;
char *s = str;

while (*s != '\0')
{
s++;
count++;
}

j = (count - 1);
for(i = 0; i <= j; i++)
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
}
putchar('\n');
}
