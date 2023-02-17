#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Print chars [0, 1, 2, ...]'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l, x, y;

x = 44;
y = 32;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 57; j++)
{
for (k = 48; k < 58; k++)
{
for (l = 48; l < 58; l++)
{

if (i != 48 || j != 48 || k != 48 || l != 48)
{
putchar(i);
putchar(j);
putchar(y);
putchar(k);
putchar(l);

if (i != 57 || j != 56 || k != 57 || l != 57)
{
putchar(x);
}
putchar(y);
}
}
}
}
}
putchar('\n');
return (0);
}
