#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - change the value of n to 98 from the pointer
 * @n: given pointer
 * Return: None
 */

void reset_to_98(int *n)
{
int l = 98, *m;
m = &l;
*n = *m;
}
