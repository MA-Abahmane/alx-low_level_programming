#include "main.h"
#include <stdio.h>

/**
 * times_table - watch numbers
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%d", j * i);
if (j != 9)
{
if ((i * (j + 1)) < 10)
{
printf(",  ");
}
else
{
printf(", ");
}
}
}
putchar('\n');
}
return;
}
