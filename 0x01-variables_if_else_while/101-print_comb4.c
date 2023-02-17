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
int i, j, k, l, f;

f = 44;
k = 32;
  
for (i = 48; i < 57; i++)
{
for (j = i + 1; j < 58; j++)
{
for (l = j+1; l < 58; l++)
{
// nums 00
putchar(i);
putchar(j);
putchar(l);
if (i != 55 || j != 56 || l != 57)
{
// parenteses ','
putchar(f);
// space ' '
putchar(k);
}
}
}
}
putchar('\n');
return (0);
}
