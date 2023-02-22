#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:  0
 */
int main(void)
{
int i, total;

total = 0;

for (i = 0; i < 1024; i++)
{
if (i % 5 == 0 || i % 3 == 0)
{
total = total + i;
}
}
printf("%d", total);
return (0);
}
