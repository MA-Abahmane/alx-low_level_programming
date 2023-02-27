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
int *x;

x = b;
*a = *x;
x = a;
*b = *x;
}
