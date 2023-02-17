#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Print chars [0, 1, 2, ..., 89]'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, f;

f = 44;
k = 32;

for (i = 48; i < 57; i++)
{
for (j = i + 1; j < 58; j++)
{
// nums 00
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
// parenteses ','
putchar(f);
// space ' '
putchar(k);
}
}
}
putchar('\n');
return (0);
}
