#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: This is a pointer to the block of memory to fill.
 * @b: The value to be set.
 * @n: The number of bytes to be set to the value.
 * Return: the buffer after the changes are made
 */

char *_memset(char *s, char b, unsigned int n)
{ 
char *buffer = s;

return (memset(buffer, b, n));
}
