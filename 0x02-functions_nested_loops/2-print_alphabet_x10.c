#include "main.h"

/**
 * print_alphabet_x10 - print the alphabests 10 times
 */
void print_alphabet_x10(void)
{
int h, i;

for (h = 0; h <= 9; h++)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
return;
}
