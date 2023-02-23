#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - find out if the int c is a number
* @c: given int
* Return: 0 alltimes
*/

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);  
}
else
{
return (0);
}
}
