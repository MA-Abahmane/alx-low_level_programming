#include "main.h"

/**
 * get_bit - a function that returns the
 *    value of a bit at a given index.
 * @n: given number to convert to binary.
 * @index: is the index of the bit you want to get.
 *
 * Return: the value of the bit at index index or
 *    -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int len;

len = sizeof(unsigned long int) *8;
if (len <= index)
return (-1);

/* set mask index to 1 and fusion with n*/
*n = (1 << index) | *n;

return (1);
}
