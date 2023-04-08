#include "main.h"

/**
 * clear_bit - a function that returns the number of bits
 *      you need to flip a number to another.
 * @n: base number.
 * @m: number to reach.
 *
 * Return: the number of bits needed to flip the
 *      number n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0, Xor = n ^ m;

while (Xor)
{
if ((Xor & 1) == 1)
++count;

Xor = Xor >> 1;
}

return (count);
}
