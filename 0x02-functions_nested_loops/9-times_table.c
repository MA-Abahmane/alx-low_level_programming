#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - watch numbers
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%d", j * i);
if ((i * j) != 81)
{
 printf(", ");
}
}
putchar('\n');
}
return;
}
