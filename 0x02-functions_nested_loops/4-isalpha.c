#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check if its a letter
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
