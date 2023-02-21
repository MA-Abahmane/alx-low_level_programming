#include "main.h"

/**
 * main.h - Entry point
 *
 * Description: [Print [a..z\n] from another function]
 *
 * Return: None
 */void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
return;
}
