#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Print chars [a..z][A..Z]'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
