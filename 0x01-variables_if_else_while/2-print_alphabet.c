#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Print chars [a..z]'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for(i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
