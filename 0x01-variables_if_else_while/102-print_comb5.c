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
int i, j, k, f, count;

f = 44;
k = 32;
count = 0;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
putchar(i);
putchar(j);
count++;
if (i != 57 || j != 57)
{
if (count % 2 == 0)
{
putchar(f);
}
putchar(k);
}
}
}
putchar('\n');
return (0);
}
