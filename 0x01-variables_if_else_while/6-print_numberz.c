#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Print numbers [0..9]'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
