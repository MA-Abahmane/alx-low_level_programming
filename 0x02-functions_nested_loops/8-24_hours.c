#include "main.h"

/**
 * jack_bauer - watch numbers
 */
void jack_bauer(void)
{
int i, j, hours, mins;

hours = 24;
mins = 60;

for (i = 0; i < hours; i++)
{
for (j = 0; j < mins; j++)
{
char c = '0';

_putchar((i / 10) + c);
_putchar((i % 10) + c);
_putchar(':');
_putchar((j / 10) + c);
_putchar((j % 10) + c);
_putchar('\n');
}
}
}

