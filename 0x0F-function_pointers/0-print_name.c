#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - call on function to print a name
 * @name: given name
 * @f: printer function to call
 * Return: NONE
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
