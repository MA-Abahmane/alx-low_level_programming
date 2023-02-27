#include <stdio.h>
#include "main.h"

/**
 * swap_int - switch pointer values
 * @a: first given pointer
 * @b: second given pointer
 * Return: None
 */

void swap_int(int *a, int *b)
{
int *x, *y;
*x = &a;
*y = &b;

*a = *y;
*b = *x;
}
