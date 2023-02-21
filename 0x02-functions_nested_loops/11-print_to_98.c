#include "main.h"

/**
 * print_to_98 - start from number given and go to 98
 */
void print_to_98(int num)
{
if (num < 98)
{
while(num < 98)
{
_printf("%d", num);
if (num != 98)
{
_printf(", ");
}
num++;
}
}
if (num > 98)
{
while(num > 98)
_printf("%d", num);
if (num != 98)
{
_printf(", ");
}
num--;
}
return 0;
}
