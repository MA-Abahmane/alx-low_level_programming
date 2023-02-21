#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [Print [a..z\n] from another function 10 times]
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
int h, i;

for (h = 0; h <= 9; h++)
{
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
return;
}
