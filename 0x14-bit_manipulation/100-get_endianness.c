#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
int hex = 0x70121210;
char *p = (char*) &hex;

if (*p == 0x70)
return (0);

else
return (1);
}
