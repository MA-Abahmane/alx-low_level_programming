//#include "main.h"

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
printf("%d, ", j * i);
}
putchar('\n');
}
return;
}
