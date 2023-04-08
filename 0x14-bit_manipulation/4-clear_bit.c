#include "main.h"

/**
 * clear_bit - a function that sets the value
 *    of a bit to 0 at a given index.
 * @n: given number to convert to binary.
 * @index: is the index of the bit you want to get.
 *
 * Return: the value of the bit at index index or
 *    -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int len;

len = sizeof(unsigned long int) * 8;
if (len <= index)
return (-1);

/* set mask to ones and index to 0 and fusion with n*/
/* 111..0.index.1111 */
*n = (~(1 << index)) & *n;

return (1);
}
