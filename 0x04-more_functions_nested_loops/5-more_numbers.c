#include <stdio.h>
#include "main.h"

/**
* more_numbers - print numbers in reange [0..14] 10 times
*1
* Return: None
*/

void more_numbers(void)
{
int i, j, k;

k = 0;

while (k <= 10)
{
for (i = 48; i < 50; i++)
{
for (j = 48; j < 58; j++)
{
if (i == 49 && j == 53)
{
break;
}
if (i != '0')
{
putchar(i);
}
putchar(j);
}
}
putchar('\n');
k++;
}
}
