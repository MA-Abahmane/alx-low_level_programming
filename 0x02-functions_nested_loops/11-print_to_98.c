#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - start from number given and go to 98
 */
void print_to_98(int num)
{
if (num < 98)
{
while(num <= 98)
{
printf("%d", num);
if (num != 98)
{
printf(", ");
}
num++;
}
}
else if (num > 98)
{
while(num >= 98)
{
printf("%d", num);
if (num != 98)
{
printf(", ");
}
num--;
}
}
else 
{
printf("98");
}
printf("\n");
}
