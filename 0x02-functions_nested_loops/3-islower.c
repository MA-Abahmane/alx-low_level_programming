#include "main.h"
#include <ctype.h>

/**
 * _islower - find out if char is lowercased
 * @C - is a given char to check
 * return - 1 if lowercase 0 if not
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
