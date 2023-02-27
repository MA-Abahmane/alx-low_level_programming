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
char rev = s[0];
int count = 0;
  
while (s[count] != '\0')
count++;
for (i = 0; i < count; i++)
{
--count;
rev = s[i];
s[i] = s[count];
s[count] = rev;
}
}
