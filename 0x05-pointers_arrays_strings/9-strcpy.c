#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src to dest
 * @dest: receaving point
 * @src: sending point
 * Return: None
 */
char *_strcpy(char *dest, char *src)
{
int j, i = 0;

while (*(src + i) != '\0')
{
i++;
}

for (j = 0; j < i ; j++)
{
dest[j] = src[j];
}

dest[i] = '\0';
return (dest);
}

