#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_most_numbers - print numbers in range [1..9] without 2 and 4
*
* Return: 0 alltimes
*/

void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
putchar(i);
}
}

putchar('\n');
return;
}
