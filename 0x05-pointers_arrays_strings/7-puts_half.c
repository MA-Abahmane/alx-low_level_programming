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
int i, j, count = 0;
char *s = str;

while (*s != '\0')
{
s++;
count++;
}

j = (count - 1);
for (i = 0; i <= j; i++)
{
if (i > count / 2 && count > 20)
{
printf("%c", str[i]);
}
}
putchar('\n');
}
