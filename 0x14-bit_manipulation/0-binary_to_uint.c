#include "main.h"

/**
 * binary_to_uint - a function that converts
 *   a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if error.
 */

unsigned int binary_to_uint(const char *b)
{
int i, len;
unsigned int num = 0;

if (b == NULL)
return (0);

len = strlen(b);

i = 0;
while (i < len)
{
if (b[i] == '1')
num = (num << 1) | 1;

else if (b[i] == '0')
num = num << 1;

if (b[i] != '0' && b[i] != '1')
return (0);

++i;
}

return (num);
}
