#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha : find out if char is lowercased
 * @c:  is a given char to check
 * Return:  1 if its a letter 0 if not
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
