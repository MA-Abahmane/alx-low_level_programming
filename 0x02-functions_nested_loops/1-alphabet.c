#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: [Print [a..z\n] from another function]
 *
 * Return: Always 0
 * 
 * code by: MAAbahmane
 */

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
return;
}
