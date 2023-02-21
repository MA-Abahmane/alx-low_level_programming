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
int i, sum3, sum5, all;
 
i = 0

while (i < 1024)
{
if (i % 5 == 0)
{
 sum5 += i;
}
if (i % 3 == 0)
{
sum3 += i;
}
}
all = sum5 + sum 3;
printf("%d", all);

return (0);
}
