#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers in reange [0..9]
*
* Return: None
*/

void print_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
_putchar(i);
}
_putchar('\n');
}
