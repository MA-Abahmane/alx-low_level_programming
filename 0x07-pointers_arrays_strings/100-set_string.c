#include <stdio.h>
#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: given pointer
 * @to: tring to change
 * Return: NONE
 */

void set_string(char **s, char *to)
{
*s = to;
}
