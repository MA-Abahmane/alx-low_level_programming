#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - a function that makes an array of structures using
 * the mainstructure "structure op" and initialises each one.
 *
 * @s: The operator
 * Return: return the correct function pointer judging from the
 * operator given to main
 */

int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

i = 0;
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
++i;
}

return (NULL);
}
