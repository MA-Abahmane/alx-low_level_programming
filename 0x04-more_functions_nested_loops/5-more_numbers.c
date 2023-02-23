#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_most_numbers - print numbers in range [1..14] 10 times
*
* Return: 0 alltimes
*/

void more_numbers(void)
{
int i, j, k;

k = 0;

while (k <= 10)
{
for (i = 48; i < 50; i++)
{
for (j = 48; j < 53; j++)
{
if (i != '0')
{
putchar(i);
}
putchar(j);
}
}
putchar('\n');
k++;
}

return;
}
