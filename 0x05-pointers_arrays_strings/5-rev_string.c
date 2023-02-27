#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - a function that prints a string, followed by a new line.
 * @s: given string
 * Return: None
 */
void rev_string(char *s);
int main(void)
{
	char s[11] = "Holberton!";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}


void rev_string(char *s)
{
char rev[9000];
int i, j, count = 0;

while (s[count])
{
count++;
}
j = count - 1;

for (i = 0; i < count; i++) 
{
rev[i] = s[j];
--j;
}

for (i = 0; i <= strlen(s); i++)
{
s[i] = rev[i];
}
}
