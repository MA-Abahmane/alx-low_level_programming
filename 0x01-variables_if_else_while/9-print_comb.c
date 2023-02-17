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
int i, j, k;

j = 44;
k = 32;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(j);
putchar(k);
}
}
putchar('\n');
return (0);
}
